#ifndef CAT_H_
#define CAT_H_

class Cat {
 private:
  bool happy = true;

 public:
  Cat();
  ~Cat();
  void makeSad();
  void makeHappy();
  void speak();
};

#endif /* CAT_H_ */
