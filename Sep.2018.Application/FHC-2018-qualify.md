# FHC 2018 qualify

## 1. Tourist:
    for(LL j=0;j<K;++j){
      Vth_visit.append(is((j + K*(V-1))%N, A[(j + K*(V-1))%N]));
    }


## 2. Interception:
    if N%2 == 0:
      有 0 个 root
    else:
      有 1 个 root， x = 0.0


## 3. String:
    Check 给定的string A 是不是循环模式，比如 ABCABCAB 这种：
      如果是：Impossible
      不是：很简单能构造出反例

