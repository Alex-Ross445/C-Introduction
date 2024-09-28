def selection_sort_steps(arr):
    n = len(arr)
    steps = []
    for i in range(n-1):
        min_idx = i
        for j in range(i+1, n):
            if arr[j] < arr[min_idx]:
                min_idx = j
        arr[i], arr[min_idx] = arr[min_idx], arr[i]
        steps.append(' '.join(arr))
    return steps

# Nhập chuỗi từ người dùng
input_string = input("Nhập chuỗi ngăn cách bởi dấu cách: ")
# Chuyển chuỗi thành mảng các phần tử
arr = input_string.split()

# Sắp xếp chuỗi sử dụng Selection Sort và lưu các bước sắp xếp vào một danh sách
sorting_steps = selection_sort_steps(arr)

# In ra từng bước sắp xếp thành các dòng khác nhau
for i, step in enumerate(sorting_steps):
    print(f"Bước {i+1}: {step}")