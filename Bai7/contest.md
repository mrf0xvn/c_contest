# \[Kiểu dữ liệu-if else\]. Bài 7. Số lớn nhất và nhỏ nhất



---

[Submit solution](http://oj.28tech.com.vn/problem/ifelse07/submit)

---
---

Points: 1.00 (partial)

Time limit: 1.0s

Memory limit: 256M

Input: stdin

Output: stdout

---

Allowed languages

C, C++, Java, Kotlin, Pascal, PyPy, Python, Scratch

Cho 2 số nguyên **a** và **b**. Bạn hãy tìm 2 số sau, số thứ 1 là **số lớn nhất <= a mà chia hết cho b**, số thứ 2 là **số nhỏ nhất >=a mà chia hết cho b**. Chú ý các bạn không được dùng vòng lặp.

**Gợi ý** : Số thứ nhất là a / b \* b, ví dụ a = 23, b = 5 thì kết quả là 23 / 5 \* 5 = 20. Số thứ 2 thì chia ra làm 2 trường hợp, a đã chia hết cho b thì đáp án sẽ là a, ngược lại đáp án là (a / b + 1) \* b, chính là số thứ 1 cộng thêm b.

---

##### Đầu vào

1 dòng chứa 2 số **a**, **b**.

---

##### Giới hạn

1<=a,b<=10^6

---

##### Đầu ra

Dòng đầu tiên in ra số thứ 1 cần tìm. Dòng thứ 2 in ra số thứ 2 cần tìm.

---

#### Ví dụ :

##### Input 01

Copy

```
23 5

```

##### Output 01

Copy

```
20 25

```

##### Input 02

Copy

```
3 10

```

##### Output 02

Copy

```
0 10

```

---

[Report an issue](http://oj.28tech.com.vn/problem/ifelse07/tickets/new)