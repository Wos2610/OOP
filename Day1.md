# Encapsulation & Abstraction    

## **1. OOP - Object Oriented Programming**  

### **Class**  
Một lớp là một kiểu dữ liệu bao gồm các thuộc tính và các phương thức được định nghĩa từ trước. Hiểu nôm na hơn là các đối tượng có các đặc tính tương tự nhau được gom lại thành một lớp đối tượng.  

### **Object**  
Một đối tượng bao gồm 2 thông tin: thuộc tính và phương thức.
 - Thuộc tính (Attributes) : những thông tin, đặc điểm của đối tượng.
 - Phương thức (Methods) : những thao tác, hành động mà đối tượng đó có thể thực hiện.   

> ***Phân biệt giữa Class và Object***  
> Lớp có thể hiểu như là một khuôn mẫu còn đối tượng là một thực thể được biểu hiện dựa trên khuôn mẫu đó.

### **Con trỏ this**   
- Đây là một con trỏ đặc biệt dùng để trỏ đến địa chỉ của đối tượng hiện tại  
```js
class SinhVien{
	
	string MSV = "B20DCCN001";
	string name;
	string clas;
	string date;
	float x;
    public:
	void nhap(){
        getline(cin, this->name);
        cin >> this->clas;
        cin >> this->date;
        cin >> this->x ;
    }
	void xuat(){
        cout << this->MSV << " " << this->name << " " << this->clas << " " << this->date << " " ;
        printf("%.2f", this->x);
    };
	
};


int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
}
``` 

## **2. Các tính chất của OOP**  

### **2.1 Encapsulation (Tính đóng gói)**

- Tính đóng gói tức là quy tắc yêu cầu trạng thái bên trong của một đối tượng được bảo vệ và tránh truy cập được từ code bên ngoài (tức là code bên ngoài không thể trực tiếp nhìn thấy và thay đổi trạng thái của đối tượng đó)
- Là cơ chế của che giấu dữ liệu (Data Hiding) bởi chúng được lớp (class) che giấu đi (ở dạng `private`) một số dữ liệu, hàm và phương thức để đảm bảo rằng các dữ liệu đó sẽ được truy cập và sử dụng đúng mục đích, đúng cách thông qua các hàm và phương thức ở dạng `public` mà class cung cấp.  

### **2.2 Abstraction (Tính trừu tượng)**

- Tính trừu tượng nghĩa là chọn ra các thuộc tính, phương thức của đối tượng cần cho việc giải quyết bài toán đang lập trình. 
- Tập trung vào cốt lõi của đối tượng, bỏ qua những thứ không liên quan và không quan trọng.

### **2.3 Inheritance (Tính kế thừa)**

### **2.4 Polymorphism (Tính đa hình)**


## **3. Access Modifiers** (Phạm vi truy cập) 

| Access Modifier | Can be accessed by |
| :-----------| ----------- |
| `private`| The member functions ***inside*** the class or the ***friend functions***. |
| `public` | Other classes and functions ***inside*** or ***outside*** the class. |
| `protected`| The member functions ***inside*** the class or the ***friend functions*** or ***derived class***.|


> *Nếu trong class t không khai báo phạm vi truy cập thì sẽ mặc định là `private`*

## **4. Constructor and Destructor** (Hàm tạo và Hàm hủy)

### **Constructor** (Hàm tạo)

### Định nghĩa : 
- Là hàm thành viên được tự động được thực thi khi chương trình tạo ra một đối tượng (instance) từ class, và được sử dụng với mục đích chính là khởi tạo các biến thành viên trong class đó.
### Đặc điểm :
- Tên constructor trùng với tên của class
- Không có giá trị trả về
- Được gọi tự động khi object được tạo ra
- Thường được đặt ở `public` section của class

### Syntax :

+ Bên trong class: 
> \<class-name> (list-of-parameters) { // constructor definition }    

+ Bên ngoài class
> \<class-name>: :<class-name> (list-of-parameters){ // constructor definition}


### Phân loại : 

Default Constructor ( Zero-argument constructor ): 

```js
class Student{
    private:
        string name;
        int age;
    public:
        Student(){
            name = "";
            age = 0;
        }
};
```
Parameterized Constructors

```js
class Student{
    private:
        string name;
        int age;
    public:
        Student(int n){
            name = "";
            age = n;
        }
};
```
### **Destructor** (Hàm hủy)

### Định nghĩa:
- Destructor destroys the class objects created by constructor. 
### Đặc điểm 
- Tên destructor trùng với tên của class.
- Không có tham số truyền vào.
- Không có giá trị trả về ( kể cả void ).
- Được gọi tự động khi object bị hủy.
- It cannot be declared static or const.
- Nên được đặt ở `public` section của class

### Syntax
+ Bên trong class: 
> ~ \<class-name>(){...}
+ Bên ngoài class
> \<class-name>: : ~ \<class-name>(){...}


```js
class Student{
    private:
        string name;
        int age;
    public:
        Student(){
            name = "";
            age = 0;
        }
        ~Student(){}
};
```
## **5. Getter and Setter**
- Nếu muốn đọc giá trị của `private` member -> dùng public get method
- Nếu muốn cập nhật giá trị của `private` member -> dùng public set method

```js
class Student{
    private:
        string name;
        int age;
    public:
        // Setter
        void setAge(int n){
            this->age = n;
        }
        // Getter
        int getAge(int n){
            return this->age;
        }
};
```

##  **6. Stactic Variable**

Biến static trong hàm : 
- Vùng nhớ cho nó tồn tại theo vòng đời của chương trình.
- Ngay cả khi hàm được gọi nhiều lần, vùng nhớ cho biến static chỉ được cấp phát một lần và giá trị của biến trong những lần gọi trước đó được lưu lại và được sử dụng để thực hiện thông qua các lượt gọi hàm tiếp theo.

Biến static trong class:
- Các biến tĩnh trong một lớp được chia sẻ bởi các đối tượng.
- Chúng ta không tạo ra các bản sao cho cùng một biến tĩnh của các đối tượng khác nhau.
> *Biến tĩnh không thể khởi tạo bằng Constructor*

## **7. Kĩ thuật chia tách file ( file.h & file.cpp )**

File.h :
- Dùng để khai báo hàm.
- Include tất cả thư viện, using namespace, khai báo tất cả các hàm.
```js
/// test.h
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<queue>
using namespace std;

int sum(int a, int b);
```

File.cpp :
- Dùng để viết hàm.
- Khai báo file.h, viết các hàm, viết hàm main.
> *Tất cả các file trong cùng một project phải được đặt trong cùng 1 folder*

```js
#include "test.h"

int sum(int a, int b){
	return a + b;
}

void process(){
	int m, n;
	cin >> m >> n;
	cout << sum(m, n);
	
	cout << "\n";
}

int main(){
	int T;
	cin >> T;
	while(T--){
		process();
	}
}
```

## **8. Quy tắc đặt tên biến trong OOP C++**
> Có thể dùng theo quy tắc `camelCase` hoặc `snake_case`  

### **Tên hàm kiểu A/HC/LC**
> *prefix? + action(A) + high context (HC) + low context (LC)*

**Action** : Hành động của hàm  
| Action | Ý nghĩa|
| ------ | -------|
|`get` | Lấy dữ liệu | 
|`set`| Gán giá trị cho biến |
|`reset` | Đặt lại giá trị ban đầu cho biến |  
|`delete` | Xóa bỏ hoàn toàn | 
|`creat` | Tạo dữ liệu mới |

**Context** : Bối cảnh xử lí hàm 
- Hiểu đơn giản thì context là mục đích của hàm, hàm tồn tại để xử lý cái gì.
- Khi hàm được khai báo trong một class, hoặc khi hàm đó chuyên được dùng để xử lý một kiểu dữ liệu nào đó -> có thể không cần dùng context.
> *Tận dụng context để tránh lặp từ*

**Prefixes** : Tiền tố giúp tăng ý nghĩa của hàm/biến  
|Prefixe| Ý nghĩa | Ví dụ|
|-----|-------------------------------------------|-----|
|`is` |  mô tả đặc điểm / trạng thái của context. | isPrime |
|`min/max`|  mô tả giới hạn của context. | minNum |
|`prev/next` |  thể hiện sự chuyển từ trạng thái cũ sang trạng thái mới. | 






















 
