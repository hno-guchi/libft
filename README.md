# Libft

C言語の標準ライブラリ関数を再実装しました。
文字列操作、メモリ管理、リスト操作など、基本的な関数を提供します。

## インストール

```sh
make
```

これで`libft.a` という静的ライブラリが生成されます。

## 使い方

1. `libft.a` をコンパイル時にリンクします。
2. `libft.h` をインクルードして使用します。

```c
#include "libft.h"

int main(void) {
    char *str = ft_strdup("Hello, World!");

    ft_putstr_fd(str, STDOUT_FILENO);
    free(str);
    return (0);
}
```

コンパイル:

```sh
gcc -Wall -Wextra -Werror main.c -L. -lft -o [my_program]
```

## 関数一覧

### 標準入出力
- `ft_putchar_fd` char型を出力
- `ft_putendl_fd` 文字列に改行を加えて出力
- `ft_putnbr_fd` int型をchar型に変換して出力
- `ft_putstr_fd` 文字列を出力

### 文字操作
- `ft_isalnum` - アルファベットまたは数字か判定
- `ft_isalpha` - アルファベットか判定
- `ft_isascii` - ascii codeの範囲内か判定
- `ft_isdigit` - 数字か判定
- `ft_isprint` - 表示可能文字か判定
- `ft_tolower` - アルファベットを小文字から大文字に変換
- `ft_toupper` - アルファベットを大文字から小文字に変換

### 文字列操作
- `ft_atoi` - 文字列（char型のポインタ）をint型に変換
- `ft_itoa` - int型の数値を文字列に変換
- `ft_split` - 文字列を区切り文字で分割
- `ft_strchr` - 指定した文字のポインタを探索
- `ft_strdup` - 文字列を複製
- `ft_striteri` - 文字列の各文字を関数に渡す
- `ft_strjoin` - ２つの文字列を結合
- `ft_strlcat` - 文字列を連結
- `ft_strlcpy` - 文字列をコピー
- `ft_strlen` - 文字列の長さを取得
- `ft_strmapi` - 文字列の各文字を関数に渡し複製
- `ft_strncmp` - 文字列をnサイズ分比較
- `ft_strnstr` - 文字列と文字列を比較
- `ft_strrchr` - 文字列と文字を比較
- `ft_strtrim` - 文字列を切り抜く
- `ft_substr` - 文字列の一部を複製

### メモリ管理
- `ft_calloc` - ゼロで埋めたメモリを確保
- `ft_bzero` - メモリをゼロで埋める
- `ft_memchr` - データを比較し一致するメモリのポインタを返す
- `ft_memcmp` - ２つのメモリを比較
- `ft_memcpy` - メモリにあるデータをコピー
- `ft_memmove` - メモリにあるデータを安全に移動
- `ft_memset` - メモリ領域を特定の値で埋める


### リスト操作
- `ft_lstadd_back` - 最後尾に要素を追加
- `ft_lstadd_front` - 先頭に要素を追加
- `ft_lstclear` - リストの要素を全て削除
- `ft_lstdelone` - リストの要素を削除
- `ft_lstiter` - 関数ポインタにリストの要素が持つデータを渡し実行
- `ft_lstlast` - リストの最後の要素を取得
- `ft_lstmap` - 要素が持つデータに変更を加えた上でリストを複製
- `ft_lstnew` - 新しいリスト要素を作成
- `ft_lstsize` - リストの要素数を取得

