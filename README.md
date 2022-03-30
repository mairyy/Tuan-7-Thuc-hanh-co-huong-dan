*** Question 1
Yêu cầu
Viết hàm int* getPointerToTen() trả về một con trỏ đến số nguyên có giá trị bằng 10.

Input
Không có đầu vào

Output
Khai báo một con trỏ kiểu nguyên trong hàm
Cấp phát bộ nhớ của một số nguyên cho con trỏ đó
Gán giá trị 10 cho vùng bộ nhớ đó và trả về con trỏ đã khai báo.

*** Question 2
Yêu cầu
Viết hàm void multiply (int* n, int k) thực hiện phép nhân giá trị do con trỏ n trỏ tới lên k lần.

Input
Đầu vào thứ nhất là con trỏ đến vùng nhớ chứa một số nguyên n
Đầu vào thứ hai là tỉ số k

Output
Hàm không yêu cầu trả về giá trị
Nhưng khi hàm kết thúc, giá trị do con trỏ n trỏ đến được nhân lên k lần.

*** Question 3
Yêu cầu:
Việc hoán đổi giá trị của hai biến được sử dụng trong nhiều bài toán, chẳng hạn như bài toán sắp xếp. Viết hàm void swap(int* a, int* b) thực hiện việc hoán đổi giá trị của hai biến a và b. 

Input:
Con trỏ lưu địa chỉ của biến thứ nhất và con trỏ lưu địa chỉ của biến thứ hai.

Output:
Hoán đổi giá trị trong 2 địa chỉ đầu vào.

*** Question 4
Yêu cầu:
Viết hàm int* getPointerToArray(int n). Hàm này khai báo một con trỏ kiểu nguyên, cấp phát bộ nhớ động cho con trỏ đó n phẩn tử kiểu nguyên và sau đó gán giá trị cho n phần tử đó các số được nhập từ bàn phím. Hàm trả về con trỏ được khai báo. 

Input:
Số nguyên  n, 0<n≤1000

Output:
Con trỏ trỏ tới vùng nhớ lưu trữ  n giá trị đã nhập từ bàn phím

*** Question 5C
Yêu cầu:
Viết hàm tính bình phương của một số thực.
Hàm double* getSquare (double number) nhận đầu vào là một số thực number và trả về con trỏ kiểu double chứa giá trị bình phương của số thực đã cho.

Input:
Một số thực number 

Output:
Output của hàm là con trỏ kiểu double chứa giá trị bình phương của số đã cho
Kết quả làm tròn đến chữ số thập phân thứ hai.

*** Question 6
Yêu cầu:
Viết hàm int* merge(int* firstArr, int lenArr1, int* secondArr, int lenArr2) thực hiện việc nối hai mảng số nguyên đã sắp xếp với độ dài biết trước thành một mảng số nguyên duy nhất và thứ tự sắp xếp không đổi.

Input:
Hàm nhận đầu vào là hai mảng số nguyên đã sắp xếp firstArr và secondArr, với độ dài mảng lần lượt là lenArr1 và lenArr2.

Output:
Hàm trả về mảng số nguyên là kết quả của việc nối hai mảng đầu vào thành mảng duy nhất và các phần tử trong mảng cũng được sắp xếp theo thứ tự không đổi (tăng dần hoặc giảm dần) như các mảng đầu vào.

*** Question 7
Yêu cầu:
Viết hàm int** inputMatrix(int nRows, int nCols) đọc từ bàn phím một ma trận số nguyên có số hàng nRows và số cột nCols, lưu vào một mảng động hai chiều và trả về con trỏ trỏ đến mảng động này.
Viết hàm void printMatrix(int** matrix, int nRows, int nCols)nhận tham số là con trỏ đến mảng động hai chiều matrix, số hàng nRows và số cột nCols của ma trận. Hàm này in ma trận đầu vào ra màn hình, các phần tử trên cùng một hàng cách nhau bởi một dấu cách.

Input:
Tham số nRows và nCols lần lượt tương ứng với số hàng và số cột của ma trận.
Tham số matrix (ở hàm thứ 2) là con trỏ đến mảng động hai chiều chứa nRows hàng và nCols cột.

Output:
Hàm inputMatrix trả về con trỏ trỏ đến một mảng động 2 chiều.
Hàm printMatrix không trả về gì, chỉ in ra màn hình ma trận đầu vào.

*** Question 8
Yêu cầu:
Ma trận chuyển vị là một ma trận ở đó các hàng được thay thế bằng các cột, và ngược lại.
Hãy viết hàm int** transpose(int** matrix, int nRows, int nCols) nhận đầu vào là một ma trận matrix bất kỳ có kích cỡ nRows×nCols chứa các giá trị nguyên.
Hàm trả về ma trận chuyển vị của ma trận matrix là ma trận matrixT có kích thước nCols×nRows với các hàng được thay thế bởi các cột.

Input:
Tham số nRows và nCols lần lượt tương ứng với số hàng và số cột của ma trận.
Tham số matrix là con trỏ đến mảng động hai chiều chứa nRows hàng và nCols cột.

Output:
Hàm trả về con trỏ đến một mảng động 2 chiều là ma trận kết quả của phép chuyển vị, có nCols hàng và nRows cột.

*** Question 9
Viết hàm đảo ngược xâu dùng con trỏ void reverse(char *s).

Yêu cầu:
 Hàm nhận vào một con trỏ đến một xâu ký tự (không chứa dấu cách) có độ dài không quá 50 ký tự.
 Đảo ngược xâu mà s trỏ tới.
 Truy cập con trỏ để xử lý.
 KHÔNG dùng thêm thư viện. Các thư viện có sẵn gồm: <iostream> và <cstring> (chỉ dùng hàm lấy độ dài chuỗi).

 *** Question 10
Viết hàm lọc ký tự phía bên phải xâu dùng con trỏ void rFilter(char *s).

Yêu cầu:
Hàm nhận vào một con trỏ đến một xâu ký tự (không chứa dấu cách) có độ dài không quá 50 ký tự.
Lọc các ký tự không nằm trong bảng chữ cái tiếng Anh (a-zA-Z) nằm ngoài cùng bên phải xâu, chuyển thành '_'.
Truy cập con trỏ để xử lý.
KHÔNG dùng thêm thư viện. Các thư viện có sẵn gồm: <iostream> và <cstring> (chỉ dùng hàm lấy độ dài chuỗi).