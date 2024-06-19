// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// MTDataFrame::to_r
Rcpp::DataFrame MTDataFrame::to_r();
RcppExport SEXP _MassiveTable_MTDataFrame::to_r() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(MTDataFrame::to_r());
    return rcpp_result_gen;
END_RCPP
}
// create_MTTable
SEXP create_MTTable();
RcppExport SEXP _MassiveTable_create_MTTable() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(create_MTTable());
    return rcpp_result_gen;
END_RCPP
}
// r_initiateMTTable
void r_initiateMTTable(SEXP xp, Rcpp::String r_filepath);
RcppExport SEXP _MassiveTable_r_initiateMTTable(SEXP xpSEXP, SEXP r_filepathSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type r_filepath(r_filepathSEXP);
    r_initiateMTTable(xp, r_filepath);
    return R_NilValue;
END_RCPP
}
// read_csv
int read_csv(std::string filepath);
RcppExport SEXP _MassiveTable_read_csv(SEXP filepathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filepath(filepathSEXP);
    rcpp_result_gen = Rcpp::wrap(read_csv(filepath));
    return rcpp_result_gen;
END_RCPP
}
// process_line
void process_line(const char* start, const char* end);
RcppExport SEXP _MassiveTable_process_line(SEXP startSEXP, SEXP endSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type start(startSEXP);
    Rcpp::traits::input_parameter< const char* >::type end(endSEXP);
    process_line(start, end);
    return R_NilValue;
END_RCPP
}
// process_csv_line
void process_csv_line(const char* start, const char* end);
RcppExport SEXP _MassiveTable_process_csv_line(SEXP startSEXP, SEXP endSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const char* >::type start(startSEXP);
    Rcpp::traits::input_parameter< const char* >::type end(endSEXP);
    process_csv_line(start, end);
    return R_NilValue;
END_RCPP
}
// read_csv_mmap
int read_csv_mmap(std::string filepath);
RcppExport SEXP _MassiveTable_read_csv_mmap(SEXP filepathSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type filepath(filepathSEXP);
    rcpp_result_gen = Rcpp::wrap(read_csv_mmap(filepath));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _rcpp_module_boot_MyClassEx();

static const R_CallMethodDef CallEntries[] = {
    {"_MassiveTable_MTDataFrame::to_r", (DL_FUNC) &_MassiveTable_MTDataFrame::to_r, 0},
    {"_MassiveTable_create_MTTable", (DL_FUNC) &_MassiveTable_create_MTTable, 0},
    {"_MassiveTable_r_initiateMTTable", (DL_FUNC) &_MassiveTable_r_initiateMTTable, 2},
    {"_MassiveTable_read_csv", (DL_FUNC) &_MassiveTable_read_csv, 1},
    {"_MassiveTable_process_line", (DL_FUNC) &_MassiveTable_process_line, 2},
    {"_MassiveTable_process_csv_line", (DL_FUNC) &_MassiveTable_process_csv_line, 2},
    {"_MassiveTable_read_csv_mmap", (DL_FUNC) &_MassiveTable_read_csv_mmap, 1},
    {"_rcpp_module_boot_MyClassEx", (DL_FUNC) &_rcpp_module_boot_MyClassEx, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_MassiveTable(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
