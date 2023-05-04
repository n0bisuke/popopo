#include "M5Atom.h"

void po(int BGM_SW_PIN, int REPLAY_PIN){
    digitalWrite(BGM_SW_PIN, LOW);
    delay(100);
    digitalWrite(REPLAY_PIN, HIGH);
    delay(100);
    digitalWrite(REPLAY_PIN, LOW);
}

void BossaNova(int BGM_SW_PIN, int REPLAY_PIN){
    digitalWrite(BGM_SW_PIN, HIGH);
    delay(100);
    digitalWrite(REPLAY_PIN, HIGH);
    delay(100);
    digitalWrite(REPLAY_PIN, LOW);
}
