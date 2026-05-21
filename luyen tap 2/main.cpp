# =========================
# Bài 1: Kiểm tra số chẵn
# =========================

def is_even(n):
    return n % 2 == 0

# Test
num = int(input("Nhập số: "))

if is_even(num):
    print("Đây là số chẵn")
else:
    print("Đây là số lẻ")


# =========================
# Bài 2: Tìm số lớn nhất
# =========================

a = float(input("Nhập số thứ nhất: "))
b = float(input("Nhập số thứ hai: "))
c = float(input("Nhập số thứ ba: "))

max_num = max(a, b, c)

print("Số lớn nhất là:", max_num)


# =========================
# Bài 3: Hàm với đối số mặc định
# =========================

def greet(name="Student"):
    print("Hello,", name + "!")

# Gọi không có đối số
greet()

# Gọi có đối số
greet("An")


# =========================
# Bài 4: Kiểm tra tuổi
# =========================

age = int(input("Nhập tuổi: "))

if 1 <= age <= 120:
    print("Tuổi hợp lệ")
else:
    print("Tuổi không hợp lệ")


# =========================
# Bài 5: Đếm ký tự 'a'
# =========================

text = input("Nhập chuỗi: ")

count_a = text.count('a')

print("Số lần xuất hiện của 'a':", count_a)


# =========================
# Bài 6: Đổi độ C sang độ F
# =========================

celsius = float(input("Nhập nhiệt độ C: "))

fahrenheit = celsius * 9 / 5 + 32

print(f"{celsius} độ C = {fahrenheit:.2f} độ F")


# =========================
# Bài 7: Tính BMI
# =========================

weight = float(input("Nhập cân nặng (kg): "))
height = float(input("Nhập chiều cao (m): "))

bmi = weight / (height * height)

print(f"BMI của bạn là: {bmi:.2f}")


# =========================
# Bài 8: Chia hai số
# =========================

try:
    x = int(input("Nhập số thứ nhất: "))
    y = int(input("Nhập số thứ hai: "))

    result = x / y

    print("Kết quả:", result)

except ZeroDivisionError:
    print("Lỗi: Không thể chia cho 0")

except ValueError:
    print("Lỗi: Dữ liệu nhập không hợp lệ")


# =========================
# Bài 9: Tính căn bậc hai
# =========================

import math

number = float(input("Nhập số: "))

if number < 0:
    print("Lỗi: Không thể tính căn bậc hai của số âm")
else:
    sqrt_num = math.sqrt(number)
    print("Căn bậc hai là:", sqrt_num)


# =========================
# Bài 10: Thông tin sinh viên
# =========================

for i in range(1, 4):
    print(f"\nNhập thông tin sinh viên {i}")

    name = input("Tên: ")

    math_score = float(input("Điểm Toán: "))
    physics_score = float(input("Điểm Lý: "))
    chemistry_score = float(input("Điểm Hóa: "))

    average = (math_score + physics_score + chemistry_score) / 3

    print("Tên sinh viên:", name)
    print(f"Điểm trung bình: {average:.2f}")
