cet_build_plugin(UseService art::module
			LIBRARIES
                        ifbeam::ifbeam
   			ifdh_art::IFBeam_service
			IFBeamP_service
			conditions_service
			prueba_service
			larcorealg::Geometry
			larcore::Geometry_Geometry_service
                        art::Framework_Services_Registry
                        art_root_io::tfile_support
                        ROOT::Core
                        art_root_io::TFileService_service
			messagefacility::MF_MessageLogger
			ROOT_BASIC_LIB_LIST
			BASENAME_ONLY
)


install_headers()
install_fhicl()
install_source()
install_scripts()
