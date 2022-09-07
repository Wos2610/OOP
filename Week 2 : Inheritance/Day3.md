# INHERITANCE

## **1. Inheritance** ( Tính kế thừa )

- Một class mới ( child class / `derived class` ) được tạo ra từ một class đã tồn tại ( `base class` / parent class ).

- Lớp con sẽ thừa hưởng toàn bộ attributes + methods từ lớp cha. Đồng thời có thể thêm các thuộc tính và phương thức riêng của chính nó.

- Khi sửa ở lớp cha thì các lớp con cũng sẽ được thay đổi theo => Tránh tình trạng phải sửa nhiều lần ở từng lớp con tăng khả năng bị sai và gây tốn thời gian, tốn tài nguyên.

- Ex :
  + `class` Information  
private : name, age, gender, homeTown    
public : getName(), setAge()

  + `sub-class` : 
class Student, class Teacher, class Worker

### Syntax

> `class`  <derived_class_name> `:` \<access-specifier> <base_class_name>
`{`
        //body
`}`

![](https://codelearn.io/Media/Default/Users/DatTrann/OOP/inheritance-in-c-22-638.jpg)


## **2. Phân loại kế thừa**
### **Single Inheritance** ( Đơn kế thừa )  
- Lớp con có duy nhất một lớp cha  
- Syntax : 
> `class` <subclass_name> `:` \<access_mode> <base_class>  
`{`
  // body of subclass
`};`

### **Multiple Inheritance** ( Đa kế thừa )
- Lớp con có thể có nhiều lớp cha
- Chỉ có trong C++, phá vỡ quy tắc của OOP -> không nên dùng

![](https://media.geeksforgeeks.org/wp-content/uploads/multiple-inheritance.png)

- Syntax : 
> `class` <subclass_name> `:` <access_mode> <base_class1>`,` <access_mode> <base_class2>`,` ....  
`{`
  // body of subclass
`};`


```c++
#include<iostream>
#include<string>

using namespace std;

class Teacher {
    string name;
    int age;
    string gender;
    public : 
        Teacher(){
            cout << "Teacher\n";
        }
};

class Professor{
    int experienceYear;
    string major;
    public :
        Professor(){
            cout << "Professor\n";
        }
};

class englishTeacher : public Teacher, public Professor{

};

int main(){
    englishTeacher x;
    return 0;
}
```
## **3. Function Overloading & Operator Overloading**

### **3.1 Function Overloading** ( Nạp chồng hàm )
- Định nghĩa : Nhiều hàm ***cùng tên*** nhưng ***khác tham số truyền vào*** ( khác số lượng hoặc kiểu dữ liệu ).
- Các hàm ***không*** thể nạp chồng : 
  + Hai hàm chỉ khác nhau kiểu trả về.
  + Một trong các hàm là static function.
  + Tham số truyền vào là pointer hoặc array là tương đương.
- Function Overloading với tham số const khi và chỉ khi tham số truyền vào là ***tham chiếu*** hoặc ***con trỏ***.
- Example : 
``` c++
// function with float type parameter
float absolute(float var){
    if (var < 0.0)
        var = -var;
    return var;
}

// function with int type parameter
int absolute(int var) {
     if (var < 0)
         var = -var;
    return var;
}
```
### **3.2 Operator Overloading** ( Nạp chồng toán tử )
- Định nghĩa : Là định nghĩa lại toán tử đã có trên kiểu dữ liệu người dùng tự định nghĩa ( Không làm thay đổi chức năng ban đầu của toán tử ).

- Ví dụ : toán tử '+' ban đầu dùng để cộng các số -> định nghĩa lại để có thể dùng để cộng các string.

- Các toán tử ***không*** thể overload :   
  + sizeof
  + Scope resolution (::)
  + Class member access operators (.(dot), .* (pointer to member operator))
  + Ternary or conditional (?:)

- Syntax :   
> <class_name> `operator` \<operator>`(`<class_name> ...`)` `{`
  ...
`}`
- Example : 
```c++
#include<iostream>
#include<math.h>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

#define M 1000006

long long gcd(long long a, long long b){
	while(a != 0){
		long long temp = a;
		a =  b % a;
		b = temp;
	}
	return b;
}

class PhanSo{
	private:
		long long tu;
		long long mau;
	public:
		PhanSo(long long a, long long b){
			tu = a;
			mau = b;
		}
		
		void rutgon(){
			long long k = gcd(tu, mau);
			tu /= k;
			mau /= k;
		}
		
    // Input/Output Operator Overloading
		friend ostream & operator << (ostream &out, const PhanSo &A){
			cout << A.tu << "/" << A.mau;
			return out;
		};
		
		friend istream & operator >> (istream &in, PhanSo &A){
			cin >> A.tu >> A.mau;
			return in;
		}
		
    // Binary Operator Overloading 
        // Khi khong co object chu thi phai dung ham friend
		friend PhanSo operator + (PhanSo A, PhanSo B){
			PhanSo q(1, 1);
			q.mau = B.mau * A.mau;
			q.tu = B.tu * A.mau + B.mau * A.tu;
			q.rutgon();
			return q;
		}

        // Khi có object chủ this thì khong can dung ham friend
        PhanSo operator + (PhanSo A){
			PhanSo q(1, 1);
			q.mau = this->mau * A.mau;
			q.tu = this->tu * A.mau + this->mau * A.tu;
			q.rutgon();
			return q;
		}
};



int main(){
    PhanSo p(1,1), q(1,1);
	cin >> p >> q;
	cout << p + q;
	return 0;
}
```



## 4. Function Overriding ( Ghi đè )
- Định nghĩa : Là định nghĩa lại hàm trong `base_class` ở `derived_class` ( tham số truyền vào phải giống hệt nhau về số lượng và kiểu dữ liệu )

- Một lớp cha có thể có nhiều lớp con kế thừa nhưng mỗi lớp con sẽ có những thay đổi sao cho phù hợp -> cần ghi đè.

```c++
#include <iostream>
using namespace std;

class Base {
   public:
    void print() {
        cout << "Base Function" << endl;
    }
};

class Derived : public Base {
   public:
    void print() {
        cout << "Derived Function" << endl;
    }
};

int main() {
    Derived derived1;
    derived1.print();
    return 0;
}
```



## 5. Friend Function
- Hàm friend có thể truy cập trực tiếp đến các phần tử private
> Nên dùng `friend` function cho ***operator overloading***
- Syntax :   
> `friend` \<type> <function_name> `{` `}`

