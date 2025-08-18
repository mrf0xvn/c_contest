# \[Kiểu dữ liệu-if else\]. Bài 12. Số ngày của tháng



---

[Submit solution](http://oj.28tech.com.vn/problem/ifelse12/submit)

---
---

Points: 1.00 (partial)

Time limit: 1.0s

Memory limit: 256M

Input: stdin

Output: stdout

---

Problem source:

Problem type

Allowed languages

C, C++, Java, Kotlin, Pascal, PyPy, Python, Scratch

Cho biết tháng và năm, hãy in ra số ngày tương ứng có trong tháng đó. Chú ý tháng 2 của **năm nhuận có 29 ngày**.

**Gợi ý**:

Copy

```
if(ngày tháng hợp lệ){
    if(thang 1, 3, 5, 7, 8, 10, 12){

    }
    else if(thang 4 6 9 11){

    }
    else{
        if(năm nhuận){

        }
        else{

        }
    }
}
else{
    cout << "INVALID\n";
}

```
---

##### Đầu vào

2 số nguyên **t** và **n** tương ứng với tháng và năm.

---

##### Giới hạn

0<=t<=100. 0<=n<=5000

---

##### Đầu ra

Nếu tháng là hợp lệ(tháng 1 tới 12) và năm là hợp lệ (lớn hơn 0) thì in ra số ngày tương ứng của năm đó, ngược lại in ra "**INVALID**".

---

#### Ví dụ :

##### Input 01

Copy

```
11 2021

```

##### Output 01

Copy

```
30

```

---

[Report an issue](http://oj.28tech.com.vn/problem/ifelse12/tickets/new)