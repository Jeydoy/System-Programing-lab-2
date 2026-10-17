#include <vector>
#include <iostream>
#include <cmath>

const int N=20000000;
const int ITERATIONS =500;

//SoA
void calculateDistance(const std::vector<float>&x ,const std::vector<float>&y,const std::vector<float>&z, std::vector<float>& dists){
for(int iter=0; iter<ITERATIONS; ++iter){
	for(int i=0; i<N; i++){
dists[i] = std::sqrt(x[i]*x[i] + y[i]*y[i] + z[i]* z[i]);
}
}
}


int main(){
std::cout<<"Allocating memory (SoA)...." <<std::endl;
std::vector<float> x(N, 1.0f);
std::vector<float> y(N, 2.0f);
std::vector<float> z(N, 3.0f);
std::vector<float> dists(N, 0.0f);

std::cout<<"Calculating distances..." <<std::endl;
calculateDistance(x, y, z, dists);

std::cout<<"Done. Sample: " << dists[0] <<std::endl;
return 0;
} 
