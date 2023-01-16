# JAVA - Syntax Cơ Bản

- Phân biệt chữ hoa, chữ thường ( Case Sensitive ).
- Program File Name = Class Name.  
> Tuy nhiên nếu trong file ***không*** có `public class` thì Program File Name có thể không trùng với Class Name.

## **1. Nhập, xuất**  

### **`*` Xuất :**

| Syntax | Đặc điểm |
| -- | -- |
| System.out.printfln("") | Con trỏ chuột nhảy xuống dòng tiếp theo |
| System.out.print("") | Con trỏ chuột *không* xuống dòng |
| System.out.printf("") | Giống trong C |


### **`*` Nhập :**  
- Cần import `java.util.Scanner` có chứa class `Scanner ` 

```java
import java.util.Scanner
```
- Tạo một đối tượng của lớp Scanner  
```java
Scanner input = new Scanner(System.in);
string name = input.nextLine();
```
| Kiểu | Đặc điểm |
| -- | -- |
| next() | Đọc một string kết thúc bằng *space* hoặc *enter* ( giống cin string trong C++ ) |
| nextLine()  | Đọc string kết thúc bằng *enter* ( giống getline(cin) trong C++ ) |
| nextInt() / nextFloat() | Đọc kiểu int / float |

## **2. Thân chương trình**
Có thể khai báo hàm main theo các cách :  

```java
public static void main(String args[])
public static void main(String[] args) // preferred way
public static void main(String []args)
```
hoặc
```java
static public void main(String args[])
```
hoặc
```java
public static void main(String... args)
```

- Sử dụng `static` có lợi thế là *không* cần tạo ra đối tượng để gọi đến hàm `main`

## **3. Biến (Variables)**
Gồm 3 loại :
- Local 
- Instance
- Static/Class

### `*` **Local Variables :** 
- Khai báo trong `method`, `constructor`, `block` và bị hủy khi `method`, `constructor`, `block` bị hủy.
- ***Không*** dùng `access modifier`.
- Phải khởi tạo giá trị ban đầu trước khi sử dụng.


### `*` **Local Variables :** 
- Khai báo trong class nhưng ***ngoài*** `method`, `constructor`, `block`.
- Được tạo ra khi một `object` được tạo với keyword `new` và bị hủy khi `obbject` bị hủy.
- Đã được khởi tạo giá trị mặc định khi tạo ra.

### `*` **Static/Class Variables :** 
- Khai báo trong class nhưng ***ngoài*** `method`, `constructor`, `block`.
- Được tạo ra duy nhất một lần khi chương trình chạy và chỉ bị hủy khi chương trình kết thúc.
- Đã được khởi tạo giá trị mặc định khi tạo ra.

## **4. Toán tử (Operators)**

Chuyển từ `string` về các kiểu dữ liệu khác :

```java
string s = "100";
int a = Integer.parseInt(s);
```

Chuyển từ các kiểu dữ liệu khác về `string` :
```java
int a = 100;
string s1 = String.valueOf(a);
string s2 = Integer.toString(a);
```
## **5. If else**

## **6. Vòng lặp for**

- for(init, condition, increment){}
```java
for(int i = 0; i < 10; i++){

}
```

- for( type_variables : array){}
```java
int a[] = {1, 2, 3};
for(int i : a){

}
```

- labelName: for(init, condition, increment){}  
-> Hữu dụng khi dùng các lệnh `break`/`continue`.
```java
a : for(int i = 1; i <= 10; i++){
    b : for(int j = 1; j <= 10; j++){
        if(i == j){
            break a;
        }
    }
}  
```

## **7. Array ( Mảng )**  

 (data_type)**[]** (array_name) **= new** (data_type) **[** (array_size) **] ;**

 ```java
 int[] a = new int[10];
 ```





