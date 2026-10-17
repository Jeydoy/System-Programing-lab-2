#include <iostream>
#include <vector>
#include <cmath>

const int N = 20000000;
const int ITERATIONS = 500;

//aos
struct Star{
float x, y ,z;
char name [20];
};

void calculateDistances (const std::vector<Star> & stars, std::vector<float>& dists){
for (int iter = 0; iter <ITERATIONS; ++iter){
	for(int i=0; i<N; i++){// from center 
	dists[i]= std::sqrt(stars[i].x * stars[i].x +
			    stars[i].y * stars[i].y +
			    stars[i].z * stars[i].z);
}
}
}


int main(){
std::cout << "Allocating memory (AoS)...." << std::endl;
std::vector<Star> stars(N, {1.0f, 2.0f, 3.0f, "Alpha Centauri"});
std::vector<float> dists(N, 0.0f);

std::cout<< "Calculating distances...."<<std::endl;
calculateDistances(stars, dists);

std::cout<< "Done. Sample: "<<dists[0]<<std::endl;
return 0;
}
