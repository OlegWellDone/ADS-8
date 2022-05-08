// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_

class Train {
 private:
  struct Cage {
    bool light;
    Cage *next;
    Cage *prev;
  };
  int countOp, length, count; // счетчик шагов (число переходов из вагона в вагон)
  Cage *first, *current; // первый вагон и текущий при входе
  Train :: Cage *create(bool light);
 public:
  Train();
  void addCage(bool light); // добавить вагон с начальным состоянием лампочки
  int getLength();          // вычислить длину поезда
  int getOpCount();         // вернуть число переходов (из вагона в вагон)
};
#endif  // INCLUDE_TRAIN_H_
