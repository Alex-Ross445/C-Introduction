import json
import os
import shutil
import time
from glob import glob
from os.path import isfile, join
import docx2txt
import requests
from win32com.client import Dispatch
import subprocess
from pdf2image import convert_from_path
from Mathpix import  MathpixConvert
from selenium.webdriver.chrome.service import Service
from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from os.path import isfile, join
Lst_Document = []
service = Service(executable_path=r"C:\Users\Administrator\Downloads\chromedriver-win64\chromedriver-win64\chromedriver.exe")

# Set up the Chrome driver
options = webdriver.ChromeOptions()
options.add_experimental_option("prefs", {
    "profile.default_content_setting_values.clipboard": 1,
    "profile.content_settings.exceptions.clipboard.https://snip.mathpix.com/,*": {
        "expiration": 0,
        "last_modified": "13241393512490000",
        "setting": 1
    }
})
# options.add_argument(r'--user-data-dir=C:\Users\Administrator\AppData\Local\Google\Chrome\User Data')
# options.add_argument('--profile-directory=Profile 2')
driver = webdriver.Chrome(service=service, options=options)

# Login to the Mathpix website
username = "zdz22092003@gmail.com"
password = "Langnghiem@79"
max_login_attempts = 10
login_attempts = 0

while login_attempts < max_login_attempts:
    driver.get("https://accounts.mathpix.com/login")
    time.sleep(1)
    email_field = WebDriverWait(driver, 10).until(
        EC.presence_of_element_located((By.NAME, "email"))
    )
    email_field.send_keys(username)
    time.sleep(1)
    password_field = WebDriverWait(driver, 10).until(
        EC.presence_of_element_located((By.NAME, "password"))
    )
    password_field.send_keys(password)
    time.sleep(1)
    submit_button = WebDriverWait(driver, 10).until(
        EC.presence_of_element_located((By.CLASS_NAME, "submit-button"))
    )
    submit_button.click()
    time.sleep(1)
    # break
    try:
        time.sleep(3)
        WebDriverWait(driver, 10).until(EC.presence_of_element_located((By.XPATH, "//a[@href='/account']")))
        print("Login successful!")
        break
    except:
        print("Login failed. Trying again...")
        login_attempts += 1

# Navigate to the Snipweb website
driver.get("https://snip.mathpix.com/")
time.sleep(2) # wait for 5 seconds
# #find  "all noted" button
# button = WebDriverWait(driver, 10).until(
#     EC.element_to_be_clickable((By.XPATH, '//*[@id="notes-menu"]/div[4]/div/div[4]/div/button'))
# )
# button.click()
# driver.find_elements(By.XPATH,'//button[@aria-label="Create New Note"]')[1].click()
time.sleep(4)
# driver.find_element(By.XPATH,'/html/body/div[10]/div/div/div/div[2]/div/div/div/ul/li[1]').click()
# time.sleep(2)
# Find and click the "All Snips" button
button = WebDriverWait(driver, 10).until(
    EC.element_to_be_clickable((By.XPATH, '//*[@id="root"]/div/div[2]/div/div[1]/div[1]/div/div[6]/button'))
)
button.click()

print("Button clicked successfully!")

time.sleep(1)
def image_Mathpix(Directory_Folder):
    print(Directory_Folder)
    Image_Lst = [file for file in os.listdir(Directory_Folder) if file.endswith('.jpeg')]
    print(Image_Lst)
    Lst = []
    for i in Image_Lst:
        Lst.append(i.replace("Image", "").replace(".jpeg", ""))
    Lst = sorted([int(x) for x in Lst])

    Lst_img_cv = []
    for i in Lst:
        img_path = "Image" + str(i) + ".jpeg"
        Lst_img_cv.append(img_path)
    Lst_img_cv.reverse()
    print(Lst_img_cv)
    MathpixConvert(Lst_img_cv, Directory_Folder, driver)
def ExtractPdf():
    Directory_path = r"C:\Users\Administrator\Documents\WarriorBuffaloMetalean\BuffaloPython\mathpix_converter\SeleniumParserPDF2LatexAutomatic\MathpixImage\hihi"
    onlyfiles = [f for f in os.listdir(Directory_path) if isfile(join(Directory_path, f))]
    for file_Name in onlyfiles:
        File_Path = Directory_path + "\\" + file_Name
        if ".pdf" in file_Name:
            #convert to image
            Pdf_path = File_Path
            Pdf_path = r"C:\Users\Administrator\Documents\WarriorBuffaloMetalean\BuffaloPython\mathpix_converter\SeleniumParserPDF2LatexAutomatic\MathpixImage\hihi\toan3.pdf"
            print(Pdf_path)
            # Store Pdf with convert_from_path function
            images = convert_from_path(Pdf_path,dpi=300,poppler_path=r"C:\Users\Administrator\Downloads\Release-23.08.0-0\poppler-23.08.0\Library\bin")
            print(images)
            NewDirec = Directory_path + "\\" + file_Name.replace(".pdf",'')
            Check = os.path.isdir(NewDirec)
            if Check == True:
                pass
            else:
                os.mkdir(NewDirec)
            for i in range(len(images)):
                # Save pages as images in the pdf
                images[i].save(NewDirec + '\\Image' + str(i) + '.jpeg', 'JPEG')

            os.rename(Pdf_path, NewDirec + "\\" + file_Name)
            Lst_Document.append(NewDirec + "\\" + file_Name)

    #         ##GetImage
            PathFile = NewDirec + "\\" + file_Name
            print(PathFile)
            if ".pdf" in PathFile or ".png" in PathFile:
                script = '"C:\Program Files (x86)\ABBYY FineReader 15\FineCmd.exe" ' + PathFile + ' /lang Vietnamese /out ' + PathFile.replace(".pdf",
                                                                                                                "") + '.rtf /report ' + PathFile.replace(
                    ".pdf", "") + 'log.txt /quit'
                print(script)
                subprocess.Popen(script, shell=True, stdout=subprocess.PIPE).stdout.read()
                # batch PDF:
                # “E:\ABBYY_15\FineCmd.exe” E:\MathpixData\Document2.pdf /lang Vietnamese /out E:\MathpixData\Result.rtf /report E:\MathpixData\log.txt /quit
                # batch img:
                # “E:\ABBYY_15\FineCmd.exe” E:\MathpixData\image1.png /lang Vietnamese /out E:\MathpixData\Result.rtf /report E:\MathpixData\log.txt /quit
                RtfFilePath = PathFile.replace(".pdf", "") + ".rtf"
                word = Dispatch('Word.Application')
                doc = word.Documents.Open(RtfFilePath)
                saveDocxPath = PathFile.replace(".pdf", "") + ".docx"
                doc.SaveAs(saveDocxPath, FileFormat=16)
                doc.Close()
                word.Quit()
                PathSaveimg = PathFile.replace(".pdf", "") + "Img"
                Check = os.path.isdir(PathSaveimg)
                if Check == True:
                    pass
                else:
                    os.mkdir(PathSaveimg)

                text = docx2txt.process(saveDocxPath, PathSaveimg)
                # # API
                # data = {
                #     'FilePath': saveDocxPath
                # }
                # url_upload = "http://localhost:6002/PythonCrawler/ParserDocx"
                # resp = requests.post(url_upload, data=data)
                # if resp.ok:
                #     print("Upload completed successfully!")
                #     print("data report crawl!")
                #     print(resp.text)
                #     aDict = json.loads(resp.text)
                #     jsonResult = json.dumps(aDict)
                #     jsonFile = open(PathFile.replace(".pdf", "") + ".json", "w")
                #     jsonFile.write(jsonResult)
                #     jsonFile.close()
                # else:
                #     print("Something went wrong!")
            image_Mathpix(NewDirec)
            # image_Mathpix(r"C:\Users\Administrator\Documents\WarriorBuffaloMetalean\BuffaloPython\mathpix_converter\SeleniumParserPDF2LatexAutomatic\MathpixImage\hihi")
#r"C:\Users\Administrator\Documents\WarriorBuffaloMetalean\BuffaloPython\mathpix_converter\SeleniumParserPDF2LatexAutomatic\MathpixImage\hihi"
ExtractPdf()
#image_Mathpix()
time.sleep(5)
driver.delete_all_cookies()
driver.close()
driver.quit()