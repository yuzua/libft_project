# libft_project

## 各関数の説明
### メモリ操作関数
#### ft_calloc
```c
void *ft_calloc(size_t nmemb, size_t size);
```

**説明**: `nmemb` 個の要素（各要素は `size` バイト）のメモリを確保し、すべてのビットを0に初期化します。オーバーフローチェックを行い、安全にメモリを確保します。

**パラメータ**:
- `nmemb`: 確保する要素の数
- `size`: 各要素のサイズ（バイト単位）

**戻り値**: 成功した場合はゼロ初期化されたメモリへのポインタ、失敗した場合は NULL

#### ft_memset
```c
void *ft_memset(void *s, int c, size_t n);
```

**説明**: メモリブロック `s` の先頭から `n` バイトを、値 `c` で埋めます。

**パラメータ**:
- `s`: 設定するメモリブロックへのポインタ
- `c`: 設定する値（unsigned char にキャストされる）
- `n`: 設定するバイト数

**戻り値**: `s` へのポインタ

#### ft_memcpy
```c
void *ft_memcpy(void *dest, const void *src, size_t n);
```

**説明**: `src` から `dest` へ `n` バイトのデータをコピーします。メモリ領域が重なる場合の動作は未定義です。

**パラメータ**:
- `dest`: コピー先のメモリ領域へのポインタ
- `src`: コピー元のメモリ領域へのポインタ
- `n`: コピーするバイト数

**戻り値**: `dest` へのポインタ

#### ft_memmove
```c
void *ft_memmove(void *dest, const void *src, size_t n);
```

**説明**: `src` から `dest` へ `n` バイトのデータをコピーします。メモリ領域が重なる場合でも正しく動作します。

**パラメータ**:
- `dest`: コピー先のメモリ領域へのポインタ
- `src`: コピー元のメモリ領域へのポインタ
- `n`: コピーするバイト数

**戻り値**: `dest` へのポインタ

#### ft_memchr
```c
void *ft_memchr(const void *s, int c, size_t n);
```

**説明**: メモリ領域 `s` の先頭 `n` バイト内で、最初に値 `c` が現れる位置へのポインタを返します。

**パラメータ**:
- `s`: 検索するメモリ領域へのポインタ
- `c`: 検索する値（unsigned char にキャストされる）
- `n`: 検索するバイト数

**戻り値**: 値 `c` が見つかった場合はその位置へのポインタ、見つからなかった場合は NULL

#### ft_memcmp
```c
int ft_memcmp(const void *s1, const void *s2, size_t n);
```

**説明**: 2つのメモリ領域 `s1` と `s2` の先頭 `n` バイトを比較します。

**パラメータ**:
- `s1`: 比較する1つ目のメモリ領域へのポインタ
- `s2`: 比較する2つ目のメモリ領域へのポインタ
- `n`: 比較するバイト数

**戻り値**: `s1` が `s2` より小さい場合は負の値、等しい場合は0、大きい場合は正の値

### 文字判定関数

#### ft_isdigit
```c
int ft_isdigit(int c);
```

**説明**: 文字 `c` が数字（0-9）かどうかを判定します。

**パラメータ**:
- `c`: 判定する文字

**戻り値**: 数字の場合は非ゼロ値、それ以外の場合は0

#### ft_isascii
```c
int ft_isascii(int c);
```

**説明**: 値 `c` が ASCII 文字セット（0-127）に含まれるかどうかを判定します。

**パラメータ**:
- `c`: 判定する値

**戻り値**: ASCII 文字の場合は非ゼロ値、それ以外の場合は0

#### ft_isprint
```c
int ft_isprint(int c);
```

**説明**: 文字 `c` が印字可能な文字かどうかを判定します（スペースを含む）。

**パラメータ**:
- `c`: 判定する文字

**戻り値**: 印字可能な文字の場合は非ゼロ値、それ以外の場合は0

## manコマンドの有効化
```
<!-- システムを「非最小化」する -->
sudo unminimize

<!-- man-db パッケージをインストール -->
sudo apt-get install man-db
```