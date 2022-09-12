# POLYMORPHISM

## **1. Tại Sao Cần Sử Dụng Tính Đa Hình ?**
- ***Polymorphism*** ( Tính đa hình ) là hiện tượng mà các đối tượng thuộc các class khác nhau có thể biểu diễn cùng một thông thiệp theo các cách khác nhau.
### **Phân loại tính đa hình :** ###
![](https://media.geeksforgeeks.org/wp-content/uploads/20200703160531/Polymorphism-in-CPP.png)

- Compile Time : 
    + Object sẽ được xác định cụ thể trong lúc chương trình biên dịch.
    + Thể hiện ở  Overloading và Overriding.
- Run Time : 
    + Object sẽ được xác định cụ thể trong lúc chương trình chạy.

## **2. Virtual Methods** ( Phương Thức Ảo )
- ***Virtual function*** 
    + Được gọi theo type của đối tượng được trỏ tới / tham chiếu chứ không phụ thuộc vào type của chính con trỏ / tham chiếu.
    + Giúp ta tạo các `base_class` ***pointers*** và sẽ gọi đến methods của bất kì `derived_class` ( Không xét đến pointers của `derived_class` vì không thể trỏ đến `base_class`).

- **Syntax :**
> `virtual` <return_type> function_name`(`\<params>`)`  `{` //body `}`

- Ta có thể dùng một ***vector con trỏ*** chung của `base_class` để có thể lưu được tất cả các object dù nó thuộc bất kì `derived_class` nào. 

- **Example :**
```c++
#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

class Animal {
private:
    int number;
public:
    Animal(){};
    // Khong dung virtual function
    void countFeet() {
        cout << "This is Animal class\n";
    }
    // Dung virtual function
    virtual void countFeet() {
        cout << "This is Animal class\n";
    }

    int getNumber() {
        return number;
    }
    void setNumber(int n) {
        number = n;
    }
};

class Chicken : public Animal {
public:
    Chicken(int n) {
        setNumber(n);
    }
    void countFeet() {
        cout << getNumber() * 2 << "\n";
    }
};

class Pig : public Animal {
public:
    Pig(int n) {
        setNumber(n);
    }
    void countFeet() {
        cout << getNumber() * 4 << "\n";
    }
};

int main() {
    Animal* a;
    Chicken c(5);
    a = &c;
    a->countFeet();
    Pig p(5);
    a = &p;
    a->countFeet();
}
```
### **Output :** 
- Khi không dùng virtual function :   
>This is Animal class  
>This is Animal class  

- Khi dùng virtual function :
>10  
>20

### **Giải thích :**
- Khi không dùng virtual function :   
    + Ta khai báo con trỏ `a` thuộc class `Animal`.
    + Gán `a = &c` thì lúc này con trỏ `a` sẽ trỏ đến đối tượng `c` thuộc class `Chicken`.
    + Sau đó ta gọi đến hàm `countFeet()`. Tuy nhiên hàm `countFeet()` được gọi sẽ là của class `Animal` chứ không phải của class `Chicken` / `Pig`.
- Khi dùng virtual function :   
    + Khi ta gọi đến hàm `countFeet()` thì sẽ gọi đến hàm `countFeet()` của class `Chicken` / `Pig`.

## **3. Pure Virtual Methods** ( Phương Thức Thuần Ảo )

- Hàm `countFeet()` ở class `Animal` không thể đếm chân cho động vật nào vì ta chưa biết cụ thể động vật đó là gì để tính. 
- ***Pure virtual method*** : là phương thảo ảo không có phần định nghĩa và bắt buộc phải ***overriden*** ở `derived_class`
- **Syntax :**
> `virtual` <return_type> function_name`(`\<params>`)` = 0;
## **4. Abstract Class** ( Lớp ảo )

- Là `base_class` chứa phương thức thuần ảo.
- Lớp ảo không thể tạo `object` nhưng có thể tạo `pointer`.
- Có thể cung cấp phần body cho hàm thuần ảo. Khi nhiều `derived_class` có thể dùng chung 1 hàm trong `base_class`. Tuy nhiên ta vẫn muốn khai báo ***pure virtual method*** thì ta có thể gọi trực tiếp `base_class`
> Phần body của hàm thuần ảo phải được cung cấp riêng

```c++
#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

class Animal {
private:
    int number;
public:
    Animal() {};
    // Pure virtual function
    virtual void countFeet() = 0;

    int getNumber() {
        return number;
    }
    void setNumber(int n) {
        number = n;
    }
};

// Phần body của hàm pure virtual
void Animal::countFeet() {
    cout << "Feet : ";
}


class Chicken : public Animal {
public:
    Chicken(int n) {
        setNumber(n);
    }
    void countFeet() {
        // Sử dụng phần body của base_class trong derived_class
        Animal::countFeet();
        cout << getNumber() * 2 << "\n";
    }
};

class Pig : public Animal {
public:
    Pig(int n) {
        setNumber(n);
    }
    void countFeet() {
        cout << getNumber() * 4 << "\n";
    }
};

int main() {
    Animal* a;
    Chicken c(5);
    a = &c;
    a->countFeet();
    Pig p(5);
    a = &p;
    a->countFeet();
}
```
    


    


