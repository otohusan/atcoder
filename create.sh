#!/bin/bash

# ユーザーからディレクトリ名を入力として受け取る
echo "Enter the directory name:"
read dirname


# スクリプトファイルが存在するディレクトリを取得
script_dir="$(cd "$(dirname "$0")" && pwd)"

# ディレクトリ作成先
full_dir="${script_dir}/abc/${dirname}"

# ディレクトリが存在しなければ作成
if [ ! -d "$full_dir" ]; then
    mkdir -p "$full_dir"
    echo "Directory created at: $full_dir"
else
    echo "Directory already exists: $full_dir"
fi

# ディレクトリ内に新しいファイルを作成
touch "${full_dir}/a.cpp"
touch "${full_dir}/b.cpp"
touch "${full_dir}/c.cpp"
touch "${full_dir}/d.cpp"
echo "File created inside the directory."
