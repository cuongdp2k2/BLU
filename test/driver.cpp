#define MAX_SIM 20

void set_random(Vtop *dut, vluint64_t sim_unit) {
// -----------------Random for test ----------------------------------------
	//dut-> rstn_i = (sim_unit >= MAX_SIM / 4) ? 1 : 0 ;
	dut->rstn_i = 1 ;
	dut-> ct_i   = 0 ;
	dut-> a_i    = rand() % (1<<31) ;
	dut-> b_i    = rand() % (1<<31) ;
	dut-> q_i    = rand() % (1<<31) ;

	static int a_temp[2];
	static int b_temp[2];
	static int q_temp[2];
	static unsigned int x_temp ;
	static unsigned int y_temp ;
	static int counter = 0 ;
	
	printf("--------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("DUT DATA[%0d]        \n",counter);
	printf("--------------------------------------------------------------------------------------------------------------------------------------\n");
	printf("[%0ld] CURRENT DATA: a=%d , b=%d , c=%d , x=%d , y=%d\n", sim_unit, dut->a_i, dut->b_i, dut->q_i , dut->x_o , dut->y_o );
	
	if(sim_unit <= 1 ) {
		a_temp[0] = dut->a_i ;
		b_temp[0] = dut->b_i ;
		q_temp[0] = dut->q_i ;
	} else {
		a_temp[1] = a_temp[0]  ;
		b_temp[1] = b_temp[0]  ;
		q_temp[1] = q_temp[0]  ;
		a_temp[0] = dut->a_i   ;
		b_temp[0] = dut->b_i   ;
		q_temp[0] = dut->q_i   ;
		x_temp = a_temp[1] + b_temp[1] * q_temp[1] ;
		y_temp = a_temp[1] - b_temp[1] * q_temp[1] ;

		printf("--------------------------------------------------------------------------------------------------------------------------------------\n");
		
		if(x_temp == dut->x_o) 
			printf("\033[0;32mPASS X         \n\033[0m");	
		else 
			printf("\033[0;31mFAIL X         \n\033[0m");

		if( y_temp == dut->y_o ) 
			printf("\033[0;32mPASS Y         \n\033[0m");
		else 
			printf("\033[0;31mFAIL Y         \n\033[0m");
		
		printf("[%0ld] STORED DATA: a=%d , b=%d , c=%d , x=%0d , y=%0d\n", sim_unit, a_temp[1], b_temp[1], q_temp[1] , x_temp , y_temp );
		
		printf("--------------------------------------------------------------------------------------------------------------------------------------\n");
	}
	counter ++ ;

}
