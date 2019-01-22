/*
    bayesreg is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    bayesreg is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with bayesreg.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef MODELS_HPP
#define MODELS_HPP
#define STAN__SERVICES__COMMAND_HPP
#include <rstan/rstaninc.hpp>
// Code generated by Stan version 2.18.0

#include <stan/model/model_header.hpp>

namespace model_WAMBS_namespace {

using std::istream;
using std::string;
using std::stringstream;
using std::vector;
using stan::io::dump;
using stan::math::lgamma;
using stan::model::prob_grad;
using namespace stan::math;

static int current_statement_begin__;

stan::io::program_reader prog_reader__() {
    stan::io::program_reader reader;
    reader.add_event(0, 0, "start", "model_WAMBS");
    reader.add_event(46, 44, "end", "model_WAMBS");
    return reader;
}

#include <meta_header.hpp>
 class model_WAMBS : public prob_grad {
private:
    int n;
    vector_d diff;
    vector_d age;
    vector_d age2;
    double mu0;
    double sigma20;
    double mu1;
    double sigma21;
    double mu2;
    double sigma22;
    double kappa0;
    double theta0;
    int run_estimation;
public:
    model_WAMBS(stan::io::var_context& context__,
        std::ostream* pstream__ = 0)
        : prob_grad(0) {
        ctor_body(context__, 0, pstream__);
    }

    model_WAMBS(stan::io::var_context& context__,
        unsigned int random_seed__,
        std::ostream* pstream__ = 0)
        : prob_grad(0) {
        ctor_body(context__, random_seed__, pstream__);
    }

    void ctor_body(stan::io::var_context& context__,
                   unsigned int random_seed__,
                   std::ostream* pstream__) {
        typedef double local_scalar_t__;

        boost::ecuyer1988 base_rng__ =
          stan::services::util::create_rng(random_seed__, 0);
        (void) base_rng__;  // suppress unused var warning

        current_statement_begin__ = -1;

        static const char* function__ = "model_WAMBS_namespace::model_WAMBS";
        (void) function__;  // dummy to suppress unused var warning
        size_t pos__;
        (void) pos__;  // dummy to suppress unused var warning
        std::vector<int> vals_i__;
        std::vector<double> vals_r__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

        // initialize member variables
        try {
            current_statement_begin__ = 2;
            context__.validate_dims("data initialization", "n", "int", context__.to_vec());
            n = int(0);
            vals_i__ = context__.vals_i("n");
            pos__ = 0;
            n = vals_i__[pos__++];
            current_statement_begin__ = 3;
            validate_non_negative_index("diff", "n", n);
            context__.validate_dims("data initialization", "diff", "vector_d", context__.to_vec(n));
            validate_non_negative_index("diff", "n", n);
            diff = vector_d(static_cast<Eigen::VectorXd::Index>(n));
            vals_r__ = context__.vals_r("diff");
            pos__ = 0;
            size_t diff_i_vec_lim__ = n;
            for (size_t i_vec__ = 0; i_vec__ < diff_i_vec_lim__; ++i_vec__) {
                diff[i_vec__] = vals_r__[pos__++];
            }
            current_statement_begin__ = 4;
            validate_non_negative_index("age", "n", n);
            context__.validate_dims("data initialization", "age", "vector_d", context__.to_vec(n));
            validate_non_negative_index("age", "n", n);
            age = vector_d(static_cast<Eigen::VectorXd::Index>(n));
            vals_r__ = context__.vals_r("age");
            pos__ = 0;
            size_t age_i_vec_lim__ = n;
            for (size_t i_vec__ = 0; i_vec__ < age_i_vec_lim__; ++i_vec__) {
                age[i_vec__] = vals_r__[pos__++];
            }
            current_statement_begin__ = 5;
            validate_non_negative_index("age2", "n", n);
            context__.validate_dims("data initialization", "age2", "vector_d", context__.to_vec(n));
            validate_non_negative_index("age2", "n", n);
            age2 = vector_d(static_cast<Eigen::VectorXd::Index>(n));
            vals_r__ = context__.vals_r("age2");
            pos__ = 0;
            size_t age2_i_vec_lim__ = n;
            for (size_t i_vec__ = 0; i_vec__ < age2_i_vec_lim__; ++i_vec__) {
                age2[i_vec__] = vals_r__[pos__++];
            }
            current_statement_begin__ = 7;
            context__.validate_dims("data initialization", "mu0", "double", context__.to_vec());
            mu0 = double(0);
            vals_r__ = context__.vals_r("mu0");
            pos__ = 0;
            mu0 = vals_r__[pos__++];
            current_statement_begin__ = 8;
            context__.validate_dims("data initialization", "sigma20", "double", context__.to_vec());
            sigma20 = double(0);
            vals_r__ = context__.vals_r("sigma20");
            pos__ = 0;
            sigma20 = vals_r__[pos__++];
            current_statement_begin__ = 9;
            context__.validate_dims("data initialization", "mu1", "double", context__.to_vec());
            mu1 = double(0);
            vals_r__ = context__.vals_r("mu1");
            pos__ = 0;
            mu1 = vals_r__[pos__++];
            current_statement_begin__ = 10;
            context__.validate_dims("data initialization", "sigma21", "double", context__.to_vec());
            sigma21 = double(0);
            vals_r__ = context__.vals_r("sigma21");
            pos__ = 0;
            sigma21 = vals_r__[pos__++];
            current_statement_begin__ = 11;
            context__.validate_dims("data initialization", "mu2", "double", context__.to_vec());
            mu2 = double(0);
            vals_r__ = context__.vals_r("mu2");
            pos__ = 0;
            mu2 = vals_r__[pos__++];
            current_statement_begin__ = 12;
            context__.validate_dims("data initialization", "sigma22", "double", context__.to_vec());
            sigma22 = double(0);
            vals_r__ = context__.vals_r("sigma22");
            pos__ = 0;
            sigma22 = vals_r__[pos__++];
            current_statement_begin__ = 13;
            context__.validate_dims("data initialization", "kappa0", "double", context__.to_vec());
            kappa0 = double(0);
            vals_r__ = context__.vals_r("kappa0");
            pos__ = 0;
            kappa0 = vals_r__[pos__++];
            current_statement_begin__ = 14;
            context__.validate_dims("data initialization", "theta0", "double", context__.to_vec());
            theta0 = double(0);
            vals_r__ = context__.vals_r("theta0");
            pos__ = 0;
            theta0 = vals_r__[pos__++];
            current_statement_begin__ = 15;
            context__.validate_dims("data initialization", "run_estimation", "int", context__.to_vec());
            run_estimation = int(0);
            vals_i__ = context__.vals_i("run_estimation");
            pos__ = 0;
            run_estimation = vals_i__[pos__++];

            // validate, data variables
            current_statement_begin__ = 2;
            check_greater_or_equal(function__,"n",n,0);
            current_statement_begin__ = 3;
            current_statement_begin__ = 4;
            current_statement_begin__ = 5;
            current_statement_begin__ = 7;
            current_statement_begin__ = 8;
            current_statement_begin__ = 9;
            current_statement_begin__ = 10;
            current_statement_begin__ = 11;
            current_statement_begin__ = 12;
            current_statement_begin__ = 13;
            current_statement_begin__ = 14;
            current_statement_begin__ = 15;
            check_greater_or_equal(function__,"run_estimation",run_estimation,0);
            check_less_or_equal(function__,"run_estimation",run_estimation,1);
            // initialize data variables


            // validate transformed data

            // validate, set parameter ranges
            num_params_r__ = 0U;
            param_ranges_i__.clear();
            current_statement_begin__ = 19;
            ++num_params_r__;
            current_statement_begin__ = 20;
            ++num_params_r__;
            current_statement_begin__ = 21;
            ++num_params_r__;
            current_statement_begin__ = 22;
            ++num_params_r__;
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
    }

    ~model_WAMBS() { }


    void transform_inits(const stan::io::var_context& context__,
                         std::vector<int>& params_i__,
                         std::vector<double>& params_r__,
                         std::ostream* pstream__) const {
        stan::io::writer<double> writer__(params_r__,params_i__);
        size_t pos__;
        (void) pos__; // dummy call to supress warning
        std::vector<double> vals_r__;
        std::vector<int> vals_i__;

        if (!(context__.contains_r("beta_intercept")))
            throw std::runtime_error("variable beta_intercept missing");
        vals_r__ = context__.vals_r("beta_intercept");
        pos__ = 0U;
        context__.validate_dims("initialization", "beta_intercept", "double", context__.to_vec());
        double beta_intercept(0);
        beta_intercept = vals_r__[pos__++];
        try {
            writer__.scalar_unconstrain(beta_intercept);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable beta_intercept: ") + e.what());
        }

        if (!(context__.contains_r("beta_age")))
            throw std::runtime_error("variable beta_age missing");
        vals_r__ = context__.vals_r("beta_age");
        pos__ = 0U;
        context__.validate_dims("initialization", "beta_age", "double", context__.to_vec());
        double beta_age(0);
        beta_age = vals_r__[pos__++];
        try {
            writer__.scalar_unconstrain(beta_age);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable beta_age: ") + e.what());
        }

        if (!(context__.contains_r("beta_age2")))
            throw std::runtime_error("variable beta_age2 missing");
        vals_r__ = context__.vals_r("beta_age2");
        pos__ = 0U;
        context__.validate_dims("initialization", "beta_age2", "double", context__.to_vec());
        double beta_age2(0);
        beta_age2 = vals_r__[pos__++];
        try {
            writer__.scalar_unconstrain(beta_age2);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable beta_age2: ") + e.what());
        }

        if (!(context__.contains_r("epsilon2")))
            throw std::runtime_error("variable epsilon2 missing");
        vals_r__ = context__.vals_r("epsilon2");
        pos__ = 0U;
        context__.validate_dims("initialization", "epsilon2", "double", context__.to_vec());
        double epsilon2(0);
        epsilon2 = vals_r__[pos__++];
        try {
            writer__.scalar_lb_unconstrain(0,epsilon2);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable epsilon2: ") + e.what());
        }

        params_r__ = writer__.data_r();
        params_i__ = writer__.data_i();
    }

    void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                         std::ostream* pstream__) const {
      std::vector<double> params_r_vec;
      std::vector<int> params_i_vec;
      transform_inits(context, params_i_vec, params_r_vec, pstream__);
      params_r.resize(params_r_vec.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r(i) = params_r_vec[i];
    }


    template <bool propto__, bool jacobian__, typename T__>
    T__ log_prob(vector<T__>& params_r__,
                 vector<int>& params_i__,
                 std::ostream* pstream__ = 0) const {

        typedef T__ local_scalar_t__;

        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

        T__ lp__(0.0);
        stan::math::accumulator<T__> lp_accum__;

        try {
            // model parameters
            stan::io::reader<local_scalar_t__> in__(params_r__,params_i__);

            local_scalar_t__ beta_intercept;
            (void) beta_intercept;  // dummy to suppress unused var warning
            if (jacobian__)
                beta_intercept = in__.scalar_constrain(lp__);
            else
                beta_intercept = in__.scalar_constrain();

            local_scalar_t__ beta_age;
            (void) beta_age;  // dummy to suppress unused var warning
            if (jacobian__)
                beta_age = in__.scalar_constrain(lp__);
            else
                beta_age = in__.scalar_constrain();

            local_scalar_t__ beta_age2;
            (void) beta_age2;  // dummy to suppress unused var warning
            if (jacobian__)
                beta_age2 = in__.scalar_constrain(lp__);
            else
                beta_age2 = in__.scalar_constrain();

            local_scalar_t__ epsilon2;
            (void) epsilon2;  // dummy to suppress unused var warning
            if (jacobian__)
                epsilon2 = in__.scalar_lb_constrain(0,lp__);
            else
                epsilon2 = in__.scalar_lb_constrain(0);


            // transformed parameters



            // validate transformed parameters

            const char* function__ = "validate transformed params";
            (void) function__;  // dummy to suppress unused var warning

            // model body

            current_statement_begin__ = 27;
            lp_accum__.add(normal_log<propto__>(beta_intercept, mu0, stan::math::sqrt(sigma20)));
            current_statement_begin__ = 28;
            lp_accum__.add(normal_log<propto__>(beta_age, mu1, stan::math::sqrt(sigma21)));
            current_statement_begin__ = 29;
            lp_accum__.add(normal_log<propto__>(beta_age2, mu2, stan::math::sqrt(sigma22)));
            current_statement_begin__ = 30;
            lp_accum__.add(inv_gamma_log<propto__>(epsilon2, kappa0, theta0));
            current_statement_begin__ = 33;
            if (as_bool(logical_eq(run_estimation,1))) {

                current_statement_begin__ = 34;
                lp_accum__.add(normal_log<propto__>(diff, add(add(beta_intercept,multiply(beta_age,age)),multiply(beta_age2,age2)), stan::math::sqrt(epsilon2)));
            }

        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }

        lp_accum__.add(lp__);
        return lp_accum__.sum();

    } // log_prob()

    template <bool propto, bool jacobian, typename T_>
    T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
               std::ostream* pstream = 0) const {
      std::vector<T_> vec_params_r;
      vec_params_r.reserve(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        vec_params_r.push_back(params_r(i));
      std::vector<int> vec_params_i;
      return log_prob<propto,jacobian,T_>(vec_params_r, vec_params_i, pstream);
    }


    void get_param_names(std::vector<std::string>& names__) const {
        names__.resize(0);
        names__.push_back("beta_intercept");
        names__.push_back("beta_age");
        names__.push_back("beta_age2");
        names__.push_back("epsilon2");
        names__.push_back("diff_rep");
    }


    void get_dims(std::vector<std::vector<size_t> >& dimss__) const {
        dimss__.resize(0);
        std::vector<size_t> dims__;
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dims__.push_back(n);
        dimss__.push_back(dims__);
    }

    template <typename RNG>
    void write_array(RNG& base_rng__,
                     std::vector<double>& params_r__,
                     std::vector<int>& params_i__,
                     std::vector<double>& vars__,
                     bool include_tparams__ = true,
                     bool include_gqs__ = true,
                     std::ostream* pstream__ = 0) const {
        typedef double local_scalar_t__;

        vars__.resize(0);
        stan::io::reader<local_scalar_t__> in__(params_r__,params_i__);
        static const char* function__ = "model_WAMBS_namespace::write_array";
        (void) function__;  // dummy to suppress unused var warning
        // read-transform, write parameters
        double beta_intercept = in__.scalar_constrain();
        double beta_age = in__.scalar_constrain();
        double beta_age2 = in__.scalar_constrain();
        double epsilon2 = in__.scalar_lb_constrain(0);
        vars__.push_back(beta_intercept);
        vars__.push_back(beta_age);
        vars__.push_back(beta_age2);
        vars__.push_back(epsilon2);

        // declare and define transformed parameters
        double lp__ = 0.0;
        (void) lp__;  // dummy to suppress unused var warning
        stan::math::accumulator<double> lp_accum__;

        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

        try {



            // validate transformed parameters

            // write transformed parameters
            if (include_tparams__) {
            }
            if (!include_gqs__) return;
            // declare and define generated quantities
            current_statement_begin__ = 40;
            validate_non_negative_index("diff_rep", "n", n);
            Eigen::Matrix<local_scalar_t__,Eigen::Dynamic,1>  diff_rep(static_cast<Eigen::VectorXd::Index>(n));
            (void) diff_rep;  // dummy to suppress unused var warning

            stan::math::initialize(diff_rep, DUMMY_VAR__);
            stan::math::fill(diff_rep,DUMMY_VAR__);


            current_statement_begin__ = 41;
            for (int i = 1; i <= n; ++i) {

                current_statement_begin__ = 42;
                stan::model::assign(diff_rep, 
                            stan::model::cons_list(stan::model::index_uni(i), stan::model::nil_index_list()), 
                            normal_rng(((beta_intercept + (beta_age * get_base1(age,i,"age",1))) + (beta_age2 * get_base1(age2,i,"age2",1))),stan::math::sqrt(epsilon2), base_rng__), 
                            "assigning variable diff_rep");
            }

            // validate generated quantities
            current_statement_begin__ = 40;

            // write generated quantities
            for (int k_0__ = 0; k_0__ < n; ++k_0__) {
            vars__.push_back(diff_rep[k_0__]);
            }

        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
    }

    template <typename RNG>
    void write_array(RNG& base_rng,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                     bool include_tparams = true,
                     bool include_gqs = true,
                     std::ostream* pstream = 0) const {
      std::vector<double> params_r_vec(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r_vec[i] = params_r(i);
      std::vector<double> vars_vec;
      std::vector<int> params_i_vec;
      write_array(base_rng,params_r_vec,params_i_vec,vars_vec,include_tparams,include_gqs,pstream);
      vars.resize(vars_vec.size());
      for (int i = 0; i < vars.size(); ++i)
        vars(i) = vars_vec[i];
    }

    static std::string model_name() {
        return "model_WAMBS";
    }


    void constrained_param_names(std::vector<std::string>& param_names__,
                                 bool include_tparams__ = true,
                                 bool include_gqs__ = true) const {
        std::stringstream param_name_stream__;
        param_name_stream__.str(std::string());
        param_name_stream__ << "beta_intercept";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "beta_age";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "beta_age2";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "epsilon2";
        param_names__.push_back(param_name_stream__.str());

        if (!include_gqs__ && !include_tparams__) return;

        if (include_tparams__) {
        }


        if (!include_gqs__) return;
        for (int k_0__ = 1; k_0__ <= n; ++k_0__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "diff_rep" << '.' << k_0__;
            param_names__.push_back(param_name_stream__.str());
        }
    }


    void unconstrained_param_names(std::vector<std::string>& param_names__,
                                   bool include_tparams__ = true,
                                   bool include_gqs__ = true) const {
        std::stringstream param_name_stream__;
        param_name_stream__.str(std::string());
        param_name_stream__ << "beta_intercept";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "beta_age";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "beta_age2";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "epsilon2";
        param_names__.push_back(param_name_stream__.str());

        if (!include_gqs__ && !include_tparams__) return;

        if (include_tparams__) {
        }


        if (!include_gqs__) return;
        for (int k_0__ = 1; k_0__ <= n; ++k_0__) {
            param_name_stream__.str(std::string());
            param_name_stream__ << "diff_rep" << '.' << k_0__;
            param_names__.push_back(param_name_stream__.str());
        }
    }

}; // model

}

typedef model_WAMBS_namespace::model_WAMBS stan_model;


#endif
