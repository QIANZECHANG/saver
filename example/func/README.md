# Infer

```
src.c:10: error: NULL_DEREFERENCE (biabduction/Rearrange.ml:1643:57-64:)
  [B1] pointer `x` last assigned on line 9 could be null and is dereferenced at line 10, column 3.

src.c:16: error: DEAD_STORE
  The value written to &x (type node*) is never used.
```
