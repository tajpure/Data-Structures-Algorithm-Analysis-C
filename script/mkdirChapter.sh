#! /bin/bash
# 生成章节目录
cd ..
for i in $(seq 1  12);do
    echo "mkdir Chapter ${i}..."
    mkdir ./Chapter${i}
done
