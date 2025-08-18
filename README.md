# ContestC

Thư mục tổng hợp các bài tập (Bai1, Bai2, ...). Mỗi thư mục chứa:

- `CMakeLists.txt`
- File mã nguồn `main.c` hoặc `main.cpp`
- Ghi chú `Contest.md` / `contest.md`

## Cấu trúc
```
BaiX/
  CMakeLists.txt
  main.c|main.cpp
  Contest.md (tùy chọn)
```

## Thiết lập Git lần đầu
```bash
git init
git add .
git commit -m "Initial commit"
git branch -M main
git remote add origin https://github.com/<user>/<repo>.git
git push -u origin main
```

## Thêm bài mới nhanh
Dùng script:
```bash
./new_problem.sh 13 c    # tạo Bai13 với C
./new_problem.sh 14 cpp  # tạo Bai14 với C++
```
Sau đó commit & push:
```bash
git add Bai13
git commit -m "Add Bai13"
git push
```

## Script hỗ trợ
`new_problem.sh` tự động tạo thư mục, CMakeLists và file mã nguồn mẫu.

## Gợi ý quy ước commit
- `Add BaiX`
- `Update BaiX: fix ...`
- `Refactor build`.

## License
Dùng nội bộ học tập.
