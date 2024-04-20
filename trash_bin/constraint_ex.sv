class rand_ex;
    rand int intValue ;
    rand bit [3:0] bitValue ;
    rand bit [3:0] bitArr [] ;
    randc bit signed [7:0] signValue ;

    constraint newConstraint {

    }

endclass
// base Syntax:
constraint constraint_name { variable inside {....}; }

//To specify range of values
constraint constraint_name {variable inside {[10:20]}; }

//To specify set of values
constraint constraint_name {variable inside {40, 70, 80}; }

//Combination of set of values and range
constraint constraint_name {variable inside {4, 7, 8, [10:20], 25, 30, [40:70]}; }

//Define based range in constraint
constraint constraint_name {variable inside {[`START_RANGE:`END_RANGE]}; }

//Variable based range in constraint
constraint constraint_name {variable inside {[var1:var2]}; }

//Parameter based range in constraint
constraint constraint_name {variable inside {[param1:param2]}; }

//Inverted inside constraint
constraint constraint_name { !(variable inside {[10:20]}); }

// if else in constraints
constraint constraint_name { if(condition) variable inside {...} else variable inside {...}; }
constraint constraint_name { variable == ((condition) ? true_value : false_value );}

// implication operator
constraint constraint_name { (expression) -> constraint ; }

// foreach loop in constraint 
constraint constraint_name { foreach(array[i]) { constraint }; }

// dist keyword in constraints
constraint constraint_name { variable dist {value :/ weightage}; }
constraint constraint_name { variable dist {value := weightage}; }

// disable randomization
object_handle.rand_mode( enable_constraint ); 
object_handle.variable.rand_mode( enable_constraint) ;

// static constraints
static constraint constraint_name { expression; }

// unique constraint 
constraint constraint_name { unique {variables}; } 

// solve before
constraint constraint_name { solve constraint_var1 before constraint_var2; }

// inline constraint 
object_handle.randomize() with { expression; } ;

// soft constraint 
constraint constraint_name {soft constraint_expression;} 

// randcase
randcase
    item_1 : statement_1 ;
    item_2 : statement_2 ;
    item_3 : statement_3 ;
    ...
    item_n : statement_n ;
endcase