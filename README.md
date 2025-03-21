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

### 文字列操作
- `ft_strlen` - 文字列の長さを取得
- `ft_strdup` - 文字列を複製
- `ft_strjoin` - 文字列を結合
- `ft_split` - 文字列を区切り文字で分割

### メモリ管理
- `ft_memset` - メモリ領域を特定の値で埋める
- `ft_bzero` - メモリをゼロクリア
- `ft_memcpy` - メモリをコピー
- `ft_memmove` - メモリを安全に移動

### リスト操作
- `ft_lstnew` - 新しいリスト要素を作成
- `ft_lstadd_front` - 先頭に要素を追加
- `ft_lstsize` - リストの要素数を取得
- `ft_lstlast` - リストの最後の要素を取得

## ライセンス

このプロジェクトは42の課題の一環として作成されており、自由に使用・改変できます。

