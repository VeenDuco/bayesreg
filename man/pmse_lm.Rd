% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/pmse_lm.R
\name{pmse_lm}
\alias{pmse_lm}
\title{Prediction mean squared error for Bayesian regularized regression models}
\usage{
pmse_lm(object, ytest = NULL, y = NULL, N_train = NULL)
}
\arguments{
\item{object}{An object of class `stanfit` returned by `stan_reg_lm`.}

\item{ytest}{Numeric vector of output values for the test set. Provide either `ytest` or `y` and `N_train`.}

\item{y}{Numeric vector[N] of output values. Provide either `ytest` or `y` and `N_train`.}

\item{N_train}{Size of the training set. First part of the data will be used for training. Provide either `ytest` or `y` and `N_train`.}
}
\value{
Numeric value for the prediction mean squared error.
}
\description{
Function to compute the prediction mean squared error (PMSE) on models fit using `stan_reg_lm`. The PMSE is computed as:
\eqn{ \frac{1}{N} \Sigma^N_{i=1} (y^{gen}_i - y_i)^2 }, with \eqn{ y^{gen}_i } being the posterior mean of the MCMC draws
for the predicted value of that observation and \eqn{y_i} being the actual value in the test set.
}
