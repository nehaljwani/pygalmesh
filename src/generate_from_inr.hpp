#ifndef GENERATE_FROM_INR_HPP
#define GENERATE_FROM_INR_HPP

#include <string>
#include <vector>

namespace pygalmesh {

void generate_from_inr(
    const std::string & inr_filename,
    const std::string & outfile,
    const bool lloyd = false,
    const bool odt = false,
    const bool perturb = true,
    const bool exude = true,
    const double edge_size = 0.0,  // std::numeric_limits<double>::max(),
    const double facet_angle = 0.0,
    const double facet_size = 0.0,
    const double facet_distance = 0.0,
    const double cell_radius_edge_ratio = 0.0,
    const double cell_size = 0.0,
    const bool verbose = true
    );

void
generate_from_inr_with_subdomain_sizing(
    const std::string & inr_filename,
    const std::string & outfile,
	const double default_cell_size,
    const std::vector<double> & cell_sizes,
	const std::vector<int> & cell_labels,
    const bool lloyd = false,
    const bool odt = false,
    const bool perturb  = true,
    const bool exude = true,
    const double edge_size = 0.0,
    const double facet_angle = 0.0,
    const double facet_size = 0.0,
    const double facet_distance = 0.0,
    const double cell_radius_edge_ratio = 0.0,
    const bool verbose  = true
    );

} // namespace pygalmesh

#endif // GENERATE_FROM_INR_HPP
