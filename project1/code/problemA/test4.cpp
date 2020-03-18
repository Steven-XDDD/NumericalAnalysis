#include "function4.h"
#include "binarymethod.h"

int main(int argc, char *argv[])
{
	std::ifstream my_in("input.txt");
	std::ofstream my_out("output4.txt");
	function1 f;
	BinaryMethod B;
	double e,fe;
	int t;
	for(int i=0; i!=10; i++) {
		my_in >> e >> fe >> t;
		B.set_error(e, fe, t);
		my_out << std::fixed << std::setprecision(15) << B.solve(f, 0, 4) << "\t" << B.num() << std::endl;
	}
	my_in.close();
	my_out.close();
	return 0;
}
