# Bài 1
# Hàm kiểm tra số chẵn
def is_even(n):
    return n % 2 == 0

# Nhập số
num = int(input("Nhập một số: "))

# Kiểm tra
print(is_even(num))
#Bài 2: Tìm số lớn nhất trong ba số
# Nhập ba số
a = float(input("Nhập số thứ nhất: "))
b = float(input("Nhập số thứ hai: "))
c = float(input("Nhập số thứ ba: "))

# Tìm số lớn nhất
max_number = max(a, b, c)

# In kết quả
print("Số lớn nhất là:", max_number)
#Bài 3: Hàm với đối số mặc định
# Hàm greet
def greet(name="Student"):
    print("Hello,", name + "!")

# Gọi hàm
greet()
greet("Thuy")
#Bài 4: Kiểm tra đầu vào tuổi
# Nhập tuổi
age = int(input("Nhập tuổi: "))

# Kiểm tra
if 1 <= age <= 120:
    print("Tuổi hợp lệ")
else:
    print("Tuổi không hợp lệ")
#Bài 5: Đếm số lần xuất hiện của ký tự 'a'
# Nhập chuỗi
text = input("Nhập chuỗi: ")

# Đếm số lần xuất hiện của 'a'
count_a = text.count('a')

# In kết quả
print("Số lần xuất hiện của 'a':", count_a)
#Bài 6: Chuyển độ C sang độ F
# Nhập nhiệt độ độ C
c = float(input("Nhập nhiệt độ (°C): "))

# Chuyển đổi
f = c * 9/5 + 32

# In kết quả
print(f"Nhiệt độ tương ứng là: {f:.2f} °F")
#Bài 7: Tính BMI
# Nhập cân nặng và chiều cao
weight = float(input("Nhập cân nặng (kg): "))
height = float(input("Nhập chiều cao (m): "))

# Tính BMI
bmi = weight / (height * height)

# In kết quả
print(f"BMI của bạn là: {bmi:.2f}")
#Bài 8: Phép chia hai số có xử lý lỗi
try:
    # Nhập dữ liệu
    a = int(input("Nhập số thứ nhất: "))
    b = int(input("Nhập số thứ hai: "))

    # Thực hiện phép chia
    result = a / b

    # In kết quả
    print("Kết quả phép chia:", result)

except ZeroDivisionError:
    print("Lỗi: Không thể chia cho 0")

except ValueError:
    print("Lỗi: Vui lòng nhập số nguyên hợp lệ")
#Bài 9: Tính căn bậc hai
import math

# Nhập số
num = float(input("Nhập một số: "))

# Kiểm tra và tính căn bậc hai
if num < 0:
    print("Lỗi: Không thể tính căn bậc hai của số âm")
else:
    print("Căn bậc hai là:", math.sqrt(num))
#Bài 10: Thông tin 3 sinh viên
# Nhập thông tin 3 sinh viên
for i in range(1, 4):
    print(f"\nSinh viên {i}")

    name = input("Nhập tên: ")
    math_score = float(input("Nhập điểm Toán: "))
    physics_score = float(input("Nhập điểm Lý: "))
    chemistry_score = float(input("Nhập điểm Hóa: "))

    # Tính điểm trung bình
    average = (math_score + physics_score + chemistry_score) / 3

    # In kết quả
    print("Tên sinh viên:", name)
    print(f"Điểm trung bình: {average:.2f}")
