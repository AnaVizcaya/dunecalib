cet_build_plugin(prueba art::service
  LIBRARIES
  wda::wda
  ifdh::ifdh
  messagefacility::MF_MessageLogger
  art::Utilities
  fhiclcpp::fhiclcpp
  cetlib::cetlib
  BASENAME_ONLY
  )


cet_build_plugin(conditions art::service
  LIBRARIES
  wda::wda
  ifdh::ifdh
  messagefacility::MF_MessageLogger
  art::Utilities
  fhiclcpp::fhiclcpp
  cetlib::cetlib
  BASENAME_ONLY
  )

install_headers()
install_source()
