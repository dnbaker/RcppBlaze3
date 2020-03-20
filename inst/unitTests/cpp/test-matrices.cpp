// [[Rcpp::depends(RcppBlaze3)]]
#include <RcppBlaze3.h>

// [[Rcpp::export]]
blaze::StaticMatrix< double,4UL,4UL > test_StaticMatrix_dbl_dim44( blaze::StaticMatrix< double,4UL,4UL > x ) {
  return x;
}

// [[Rcpp::export]]
blaze::StaticMatrix< std::complex<double>,4UL,4UL > test_StaticMatrix_cpl_dim44( blaze::StaticMatrix< std::complex<double>,4UL,4UL > x ) {
  return x;
}

// [[Rcpp::export]]
blaze::HybridMatrix< double,4UL,4UL > test_HybridMatrix_dbl_dim44( blaze::HybridMatrix< double,4UL,4UL > x ) {
  return x;
}

// [[Rcpp::export]]
blaze::HybridMatrix< std::complex<double>,4UL,4UL > test_HybridMatrix_cpl_dim44( blaze::HybridMatrix< std::complex<double>,4UL,4UL > x ) {
  return x;
}

// [[Rcpp::export]]
blaze::DynamicMatrix<double> test_DynamicMatrix_dbl(blaze::DynamicMatrix<double> x) {
  return x;
}

// [[Rcpp::export]]
blaze::DynamicMatrix< std::complex<double> > test_DynamicMatrix_cpl( blaze::DynamicMatrix< std::complex<double> > x ) {
  return x;
}


// [[Rcpp::export]]
blaze::CompressedMatrix<double> test_CompressedMatrix_dbl_dgC(blaze::CompressedMatrix<double> x) {
  return x;
}

// [[Rcpp::export]]
blaze::CompressedMatrix<double, blaze::rowMajor> test_CompressedMatrix_dbl_dgR(blaze::CompressedMatrix<double, blaze::rowMajor> x) {
  return x;
}
