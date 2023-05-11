# 1行でぽぽぽぽぽーぽ♪できるライブラリ

```
po(BGM_SW_PIN, REPLAY_PIN);
```

## サンプル

```cpp
#include "M5Atom.h"
#include "popopo.h"

//ATOM ECHOではおまじない
#define CONFIG_I2S_BCK_PIN      19
#define CONFIG_I2S_LRCK_PIN     33
#define CONFIG_I2S_DATA_PIN     22

const int REPLAY_PIN = 25;
const int BGM_SW_PIN = 21;

void setup() {
  Serial.begin(115200);
  
  pinMode(REPLAY_PIN, OUTPUT);
  pinMode(BGM_SW_PIN, OUTPUT);
}

void loop() {
  M5.update();

  po(BGM_SW_PIN, REPLAY_PIN);
  BossaNova(BGM_SW_PIN, REPLAY_PIN);

  delay(20 * 1000);
}

```

## test

test