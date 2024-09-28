def binary_search_steps(arr, target):
    start = 0
    end = len(arr) - 1
    steps = 0

    while start <= end:
        mid = (start + end) // 2
        steps += 1

        if arr[mid] == target:
            return steps
        elif arr[mid] < target:
            start = mid + 1
        else:
            end = mid - 1

    return -1  # Trả về -1 nếu không tìm thấy phần tử trong mảng

# Ví dụ sử dụng
arr = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20]
target = 16

steps = binary_search_steps(arr, target)
if steps != -1:
    print(f"Số bước lặp tối đa cần thiết để tìm phần tử {target} là: {steps}")
else:
    print(f"Không tìm thấy phần tử {target} trong mảng.")