#!/bin/bash

# ユーザーからディレクトリ名を入力として受け取る
echo "ディレクトリ名を入力"
read dirname


# スクリプトファイルが存在するディレクトリを取得
script_dir="$(cd "$(dirname "$0")" && pwd)"

# ディレクトリ作成先
full_dir="${script_dir}/abc/${dirname}"

# ディレクトリが存在しなければ作成
if [ ! -d "$full_dir" ]; then
    mkdir -p "$full_dir"
    echo "ディレクトリが作成された: $full_dir"
else
    echo "同じディレクトリが既に存在: $full_dir"
fi

# ディレクトリ内に新しいファイルを作成
cp "${script_dir}/template.cpp" "${full_dir}/a.cpp"
cp "${script_dir}/template.cpp" "${full_dir}/b.cpp"
cp "${script_dir}/template.cpp" "${full_dir}/c.cpp"
cp "${script_dir}/template.cpp" "${full_dir}/d.cpp"
echo "実行完了"
