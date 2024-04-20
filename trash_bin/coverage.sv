covergroup group_name (senitive_variables);
    option.* ;

    label : coverpoint variable {
        bins bin_single_value = { value } ;
        bins bin_multi_value  = { value1, value2, ... } ;
        bins bin_rang_value   = { value_start : value_end } ;
        bins bin_auto[num_bin]= { [ value_start : value_end ] };
        bins trans_bin        = ( value1 => value2 => value3 ) ;
        bins set_of_trans[]   = ( value1 , value2 => value3, value4 ) ; 
        bins cons_repetion    = ( trans_value[*repeat_value] )  ;
        bins cons_repetion    = ( trans_value[*start_value:end_value] )  ;
        ignore_bins ign_bin   = { ignore_value } ;
        illegal_bins ill_bin  = { illegal_value } ;
    }

    cross_lable : cross coverpoint_1, coverpoint_2, coverpoint_3, ... ,coverpoint_n ;
endgroup

group_name group_instance; 
group_instance.sample() ;