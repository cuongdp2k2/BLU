// immediate assertion
label: assert (expression) pass_statement else fail_statement;

// concurrent assertion
label: assert property ( property_name(signals) ) pass_statement else fail_statement ;

// property 
property property_name;
    expression_or_sequence
endproperty

//sequence
sequence sequence_name;
    expression ;
endsequence

// implication operator
sequence_exp |-> property_exp
sequence_exp |=> property_exp