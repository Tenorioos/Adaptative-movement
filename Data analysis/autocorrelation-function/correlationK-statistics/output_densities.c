#include "parameters.h"

void output_densities(double *den_species1, double *den_species2, double *den_species3,double *den_vacancies, double *risk_predation1, double *risk_predation2, double *risk_predation3){

	////// out put to densities of individuals and vacancies //////////////

	int k;
	FILE *densities;
	
	densities=fopen("database/densities.dat","w");

	for(k=0; k<num_generations; k++){
		fprintf(densities,"%d   %g   %g   %g  %g %g %g %g \n", k,\
			den_vacancies[k], den_species1[k], den_species2[k], den_species3[k],risk_predation1[k],risk_predation2[k], risk_predation3[k]);
			}
	
	fclose(densities);
}
