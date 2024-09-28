import glob
import json
import os
import time
from pywinauto.application import Application
import pyautogui as pyautogui
from selenium import webdriver
from selenium.webdriver.common.by import By
from selenium.webdriver.support.ui import WebDriverWait
from selenium.webdriver.support import expected_conditions as EC
from os.path import isfile, join
import pyautogui
import os
import time

def sendingTextToNote(TextFile, Page):
    path = TextFile
    path = os.path.realpath(path)
    os.startfile(path)
    time.sleep(1)
    TextParser = 'page is :' + str(Page)
    pyautogui.hotkey('enter')
    pyautogui.typewrite('page :' + str(Page))
    pyautogui.hotkey('enter')
    pyautogui.hotkey('ctrl','v')        #paset copied text from clipboard
    pyautogui.hotkey('ctrl','s')        #save the file
    pyautogui.hotkey('alt','f4')        #close the file and back to program
    print("hihi2")
    # xử lý đánh dấu câu trả lời.
    # wkspFldr = os.path.dirname(TextFile)
    # json_files = [pos_json for pos_json in os.listdir(wkspFldr) if pos_json.endswith('.json')]
    # print(wkspFldr + "\\" + json_files[0])
    # with open(wkspFldr + "\\" + json_files[0]) as json_file:
    #     json_text = json.load(json_file)
    #     # here you need to know the layout of your json and each json has to have
    #     # the same structure (obviously not the structure I have here)
    #     for i in json_text:
    #         pagePdf = i['page']
    #         Quizz = i['Quizz']
    #         imagepath = i['imagepath']
    #         if pagePdf == Page:
    #             file = open(TextFile, encoding="utf8")
    #             # read the file as a list
    #             data = file.readlines()
    #             for indexLine in range(len(data)):
    #                 lineSing = data[indexLine]
    #                 if Quizz in lineSing:
    #                     print("match")
    #                     data[indexLine] = lineSing + "\n" + "\\IMAGE: " + imagepath + "\n"
    #                 if "Câu 1." in lineSing:
    #                     # print(lineSing)
    #                     data[indexLine] = '\section{Đáp Án Đề}' + "\n" + lineSing
    #             # close the file
    #             file.close()

    #             file = open(TextFile, 'w+', encoding="utf8")
    #             for line in data:
    #                 file.write(line)
    #             file.close()
    #             print(Quizz)
    #             print(imagepath)
flagswap = True
def LinkQuiz2Image(TextFile):
    # open the data file
    file = open(TextFile, 'r', encoding="utf8")
    # read the file as a list
    data = file.readlines()
    checkindex = 0
    for indexLine in range(len(data)):
        lineSing = data[indexLine]

        if "Câu 1." in lineSing:
            checkindex = indexLine
            # print(lineSing)
            data[indexLine] = '\section{Đáp Án Đề}' + "\n" + lineSing
    print(data)
    # close the file
    file.close()
    file = open(TextFile, 'w+', encoding="utf8")
    for line in data:
        file.write(line)
    file.close()
    pass

# file_path = "H:\PycharmProjects\Source\APImathpix\MathpixImage\Data\MathpixData\Data1"
# onlyfiles = [f for f in os.listdir(file_path) if isfile(join(file_path, f))]
def MathpixConvert(LstimgPath,FolderParent,driver):
    # LstimgPath = []
    # FolderParent = r"C:\Users\Administrator\Documents\WarriorBuffaloMetalean\BuffaloPython\mathpix_converter\SeleniumParserPDF2LatexAutomatic\MathpixImage\hihi"
    #"C:\Users\Administrator\Documents\WarriorBuffaloMetalean\BuffaloPython\mathpix_converter\SeleniumParserPDF2LatexAutomatic\MathpixImage\hihi\9A26B001-298B-44C0-ABE3-8331688F577E.png"
    folderName = os.path.basename(FolderParent)
    print(LstimgPath)
    TextFile = FolderParent + "//"+folderName + ".txt"
    with open(TextFile, 'w') as f:
        f.write('')
    f.close()
    index = 1
    totalpage = len(LstimgPath)
    for img in LstimgPath:
        time.sleep(5)
        image_element = driver.find_elements(By.CLASS_NAME, "LazyLoad")
        if image_element:
            src = image_element[0].find_element(By.TAG_NAME, "img").get_attribute("src")
        print(f"SonTerry {src}")
            
        Path = FolderParent +"\\"+ img
        print(Path)
        button = WebDriverWait(driver, 10).until(
            EC.element_to_be_clickable((By.XPATH, '//*[@id="sidebar"]/div[1]/div[3]/div/div[2]/div/button'))
        )
        button.click()
        time.sleep(5)
        xpath = f'/html/body/div[3]/div/div/div/div[2]/div/div/div/ul/li[1]'
        button = WebDriverWait(driver, 10).until(
            EC.element_to_be_clickable((By.XPATH, xpath))
        )
        button.click()
        # check = driver.find_elements(By.XPATH,"")
        # print(check)
        # for i in range(20):
        #     try: 
        #         xpath = f'/html/body/div[{i}]/div/div/div/div[2]/div/div/div/ul/li[1]'
        #         button = WebDriverWait(driver, 10).until(
        #             EC.element_to_be_clickable((By.XPATH, xpath))
        #         )
        #         # button.click()
        #         if button != None: 
        #             button.click()
        #             print(f'/html/body/div[{i}]/div/div/div/div[2]/div/div/div/ul/li[1]')
        #             break
        #     except: 
        #         pass
            
        time.sleep(1)
        time.sleep(1)
        pyautogui.typewrite(Path)
        pyautogui.press("enter")
        # time.sleep(15)
        # href = driver.find_element(By.XPATH, '//div[@class="snip-container max-w-full"]').find_element(By.XPATH,
        #                                        '//div[@class="snip-container max-w-full"]')
        # time.sleep(3)
        # print("hihi")
        # input("1")
        # while True:
        #     href1 = driver.find_element(By.XPATH, '//div[@class="snip-container max-w-full"]').find_element(By.XPATH,
        #                                    '//div[@class="snip-container max-w-full"]')
        #     print("hihi1")
        #     # break
        #     if href != href1:
        #         break
        # image_element = driver.find_elements(By.CLASS_NAME, "LazyLoad")  # Thay đổi XPath và class tương ứng
        # if image_element not None: 
        #     while True: 
        #         target_src = image_element[0]
        #         target_src.find_element(By.TAG_NAME, 'src')
        #         if tar
            
        # Lấy source của hình ảnh (URL)
        while True:
           image_element = driver.find_elements(By.CLASS_NAME, "LazyLoad")
           src_present = image_element[0].find_element(By.TAG_NAME, "img").get_attribute("src")
        #    print(src_present)
           time.sleep(2)
           if src !=  src_present:
               break
        sendingTextToNote(TextFile,totalpage)
        totalpage =totalpage- 1
        print("Button clicked successfully!")
    LinkQuiz2Image(TextFile)

