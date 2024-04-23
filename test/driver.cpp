#define MAX_SIM 2000
#define Q_def ( 8380417 / 2 )
void set_random(Vtop *dut, vluint64_t sim_unit) {
// -----------------Random for test ----------------------------------------
	dut->a_i = rand()%(1<<15) ;
	dut->b_i = rand()%(1<<15) ;
	dut->carry_i = 0 ;

	static int a = 0 , b = 0 ;
	static int testPassed = 0 , testFailed = 0 ;

	if((dut->sum_o + dut->carry_o * 256) == a+b) {
		testPassed ++ ;
		printf("[%ld] a_i=%8x , b_i=%8x , sum_o = %8x , carry_o =%8x -> PASS\n",sim_unit*10+10,a,b,dut->sum_o,dut->carry_o) ;
	}
	else{
		testFailed ++ ;
		printf("[%ld] a_i=%8x , b_i=%8x , sum_o = %8x , carry_o =%8x -> FAIL\n",sim_unit*10+10,a,b,dut->sum_o,dut->carry_o) ;
	}

	if(sim_unit == MAX_SIM-1) {
		printf("-------------------------------------------------------------\n");
		printf("--------             TEST RESULT                   ----------\n");
		printf("-------------------------------------------------------------\n");
		printf("%d passed test , %d failed test\n",testPassed,testFailed) ;
		printf("%d passed test , %d failed test\n",testPassed,testFailed) ;
		printf("-------------------------------------------------------------\n");
	}

	a = dut->a_i ;
	b = dut->b_i ;

	// dut->data1_i = rand() % (1 << 31) ;
	// dut->data2_i = rand() % (1 << 31) ;
	// dut->w_i = rand() % (1 << 31) ;

	// static int data1_temp = 0 ;
	// static int data2_temp = 0 ;
	// static int data1_pass = 0 , data1_fail = 0 ; 
	// static int data2_pass = 0 , data2_fail = 0 ;
	// static int reset_temp = 0 ;
	// printf("----------------------------------------------------------------------------------------------------\n");
	// if(reset_temp == 0){
	// 	if(dut->data1_o == 0) {
	// 		printf("[%ld] data1_i=%8x , data1_o=%8x -> PASS data_1 RESET\n",sim_unit*10+10,data1_temp,dut->data1_o) ;
	// 		data1_pass ++ ;
	// 	} else {
	// 		printf("[%ld] data1_i=%8x , data1_o=%8x -> FAIL data_1 RESET\n",sim_unit*10+10,data1_temp,dut->data1_o) ;
	// 		data1_fail ++ ;
	// 	}

	// 	if(dut->data2_o == 0){
	// 		printf("[%ld] data2_i=%8x , data2_o=%8x -> PASS data_2 RESET\n",sim_unit*10+10,data2_temp,dut->data2_o) ;
	// 		data2_pass ++ ;
	// 	} else {
	// 		printf("[%ld] data2_i=%8x , data2_o=%8x -> FAIL data_2 RESET\n",sim_unit*10+10,data2_temp,dut->data2_o) ;
	// 		data2_fail ++ ;
	// 	}
	// } else {
	// 	if(data1_temp == dut->data1_o){
	// 		printf("[%ld] data1_i=%8x , data1_o=%8x -> PASS data_1\n",sim_unit*10+10,data1_temp,dut->data1_o) ;
	// 		data1_pass ++ ;
	// 	}
	// 	else {
	// 		printf("[%ld] data1_i=%8x , data1_o=%8x -> FAIL data_1\n",sim_unit*10+10,data1_temp,dut->data1_o) ;
	// 		data1_fail ++ ;
	// 	}

	// 	if(data2_temp == dut->data2_o){
	// 		printf("[%ld] data2_i=%8x , data2_o=%8x -> PASS data_2\n",sim_unit*10+10,data2_temp,dut->data2_o) ;
	// 		data2_pass ++ ;
	// 	}
	// 	else {
	// 		printf("[%ld] data2_i=%8x , data2_o=%8x -> FAIL data_2\n",sim_unit*10+10,data2_temp,dut->data2_o) ;
	// 		data2_fail ++ ;
	// 	}
	// }
	// printf("----------------------------------------------------------------------------------------------------\n");


    // if(sim_unit == MAX_SIM-1) {
	// 	printf("-------------------------------------------------------------\n");
	// 	printf("--------             TEST RESULT                   ----------\n");
	// 	printf("-------------------------------------------------------------\n");
	// 	printf("data1: %d passed test , %d failed test\n",data1_pass,data1_fail) ;
	// 	printf("data2: %d passed test , %d failed test\n",data2_pass,data2_fail) ;
	// 	printf("-------------------------------------------------------------\n");
	// }

	// data1_temp = dut->data1_i ;
	// data2_temp = dut->data2_i ;
	// reset_temp = dut->reset_ni ;
}
