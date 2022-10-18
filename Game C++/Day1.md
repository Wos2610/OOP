
# **1. Game 2D**
- Là game không thể xoay góc quay
- Cuộn bản đồ theo chiều ngang và thẳng.
- Nhân vật, bối cảnh đều giống hình vẽ trên giấy
## Các thể loại game
- Action
- Action - adventure
- Adventure
- Role - playing
- Simulation
- Strategy
- Sports

# **2. Gameloop**
- Là phần mềm giả lập Android, có vai trò hỗ trợ người chơi trải nghiệm game trên nền tảng Mobile ngay trên máy tính của mình.

# **3. Deltatime**
> ***Deltatime = 1/FPS***
- là thời gian cần để hiển thị khung hình. Nói cách khác: delta time là khoảng thời gian giữa khung hình cuối cùng và khung hình hiện tại.

> *Tại sao cần sử dụng delta time ?*

- Hiếm khi các trò chơi chạy ở FPS (Frames per second) ổn định, khi FPS thay đổi thì gây ra hiện tượng giật lag. 
- Delta time sinh ra để khắc phục điều này. Khi FPS thay đổi thì delta time cũng vậy. Delta time sẽ giúp cho sự thay đổi đột ngột FPS chưa bao giờ xảy ra và bạn sẽ ở vị trí mà bạn sẽ đến khi không bị thay đổi FPS.

# **4. Texture**
- là 1 image.
- A texture has two properties that change how it is rendered.
    + Smooth the texture : Smoothing a texture makes pixel boundaries less visible (but the image a little more blurry)
    ```c++
    texture.setSmooth(true);
    ```
    + The second property allows a texture to be repeatedly tiled within a single sprite. This only works if your sprite is configured to show a rectangle which is larger than the texture
    ```c++
    texture.setRepeated(true);
    ```


## Loading a texture
- loadFromFile
``` c++
sf::Texture texture;
if (!texture.loadFromFile("../Images/1.jpg"))
    {
        // error...
    }
```

`sf::IntRect()` : Its constructor takes the coordinates of the top-left corner, and the size of the rectangle.
```c++
// load a 32x32 rectangle that starts at (10, 10)
if (!texture.loadFromFile("image.png", sf::IntRect(10, 10, 32, 32)))
{
    // error...
}
```
- loadFromMemory
- loadFromStream
- loadFromImage

> *Use as little textures as possible.*


# **5. Sprite**

![](https://www.sfml-dev.org/tutorials/2.5/images/graphics-sprites-definition.png)

```c++
sf::Sprite sprite;
sprite.setTexture(texture);

// in main loop
window.clear();
window.draw(sprite);
window.display();
```

- Sprites can also be transformed: They have a position, an orientation and a scale.

# **6. Animation**
- Là hiệu ứng chuyển động của các nhân vật hoặc môi trường trong game.
- Animation trong game 2D là việc vẽ lần lượt các ảnh trong 1 chuỗi ảnh của một hoặc nhiều đối tượng theo một đơn vị thời gian. Mỗi Animation hoặc nhiều Animation có thể đại diện cho một hành động, ứng xử cụ thể của nhân vật.
- Để tạo animation thì cần tạo spritesheet

# **6. Tạo cửa sổ** 
``` c++
sf::Window window(sf::VideoMode(500, 300), "SFML Tutorial");
```
hoặc
``` c++
sf::Window window;
window.create(sf::VideoMode(500, 300), "SFML Tutorial");
```

# **7. Vòng lặp chính** 
``` c++
while (window.isOpen())
    {
        // Handle envent
        // Update
        // Render
    }
```
- Hàm `window.isOpen()` trả về `true` nếu cửa sổ đang mở và trả về `false` nếu cửa sổ đã đóng.

