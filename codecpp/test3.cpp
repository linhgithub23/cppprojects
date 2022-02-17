#include<iostream>
template<typename T, typename U>
U add(T a, U b)/*the function return the type of U*/
{
    return a + b;
}
{
    return a + b;
}
int main(){
    std::cout << add(1, 2) << std::endl;
    std::cout << add(1.1, 2) << std::endl;
  
    return 0;
}