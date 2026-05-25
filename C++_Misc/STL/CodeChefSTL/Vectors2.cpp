/* 
https://www.codechef.com/learn/course/cpp-development/PJGPVG/problems/IDNCJU06
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 1. Default initialization (Empty vector)
    vector<int> vec1;
    
    // 2. Initializing with specific size (default values)
    vector<int> vec2(5); // Creates a vector of size 5 with default values (0)

    // 3. Initializing with a specific size and value
    vector<int> vec3(5, 10); // Creates a vector of size 5 with all values set to 10

    // 4. Initializing with an initializer list
    vector<int> vec4 = {1, 2, 3, 4, 5};

    // 5. Using push_back to dynamically add elements
    vector<int> vec5;
    vec5.push_back(10);
    vec5.push_back(20);
    vec5.push_back(30);

    // 6. Copying an existing vector
    vector<int> vec6 = vec4; // or vector<int> vec6(vec4);

    // Displaying the contents
    cout << "Vector initialized using different methods:\n";

    cout << "vec1 (empty): " << vec1.size() << " elements\n";

    cout << "vec2 (default size 5): ";
    for (int i = 0; i < 5; i++) cout << vec2[i] << " ";
    cout << endl;

    cout << "vec3 (size 5, all values 10): ";
    for (int i = 0; i < 5; i++) cout << vec3[i] << " ";
    cout << endl;

    cout << "vec4 (initializer list): ";
    for (int i = 0; i < 5; i++) cout << vec4[i] << " ";
    cout << endl;

    cout << "vec5 (using push_back): ";
    for (int i = 0; i < 3; i++) cout << vec5[i] << " ";
    cout << endl;

    cout << "vec6 (copy of vec4): ";
    for (int i = 0; i < 5; i++) cout << vec6[i] << " ";
    cout << endl;

    return 0;
}
