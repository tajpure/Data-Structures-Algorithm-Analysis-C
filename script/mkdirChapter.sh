#! /bin/bash
# 生成章节目录
for i in $(seq 1  12);do
    echo "mkdir Chapter ${i}..."
    cd ..
    mkdir ./Chapter${i}
done
