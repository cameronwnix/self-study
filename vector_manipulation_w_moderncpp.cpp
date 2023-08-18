// Praccybara

#include <iostream>
#include <string>
#include <vector>

using namespace std;

using IntVec = vector<int>;


int main() {

IntVec vec1{1, 1, 1, 1};
IntVec vec2{2, 2, 2, 2};
vector<IntVec> vec_of_vec{vec1, vec2};

for (auto v : vec_of_vec) {
    for (auto vv : v){
        cout << vv;
    }
    cout << "\n";
}
    


}
