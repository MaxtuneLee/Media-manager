#############################################################################
# Makefile for building: MediaManager
# Generated by qmake (3.1) (Qt 6.4.1)
# Project:  MediaManager.pro
# Template: app
# Command: E:\Programfiles\qt\6.4.1\mingw_64\bin\qmake.exe -o Makefile MediaManager.pro -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug"
#############################################################################

MAKEFILE      = Makefile

EQ            = =

first: debug
install: debug-install
uninstall: debug-uninstall
QMAKE         = E:\Programfiles\qt\6.4.1\mingw_64\bin\qmake.exe
DEL_FILE      = del
CHK_DIR_EXISTS= if not exist
MKDIR         = mkdir
COPY          = copy /y
COPY_FILE     = copy /y
COPY_DIR      = xcopy /s /q /y /i
INSTALL_FILE  = copy /y
INSTALL_PROGRAM = copy /y
INSTALL_DIR   = xcopy /s /q /y /i
QINSTALL      = E:\Programfiles\qt\6.4.1\mingw_64\bin\qmake.exe -install qinstall
QINSTALL_PROGRAM = E:\Programfiles\qt\6.4.1\mingw_64\bin\qmake.exe -install qinstall -exe
DEL_FILE      = del
SYMLINK       = $(QMAKE) -install ln -f -s
DEL_DIR       = rmdir
MOVE          = move
IDC           = idc
IDL           = midl
ZIP           = zip -r -9
DEF_FILE      = 
RES_FILE      = 
SED           = $(QMAKE) -install sed
MOVE          = move
SUBTARGETS    =  \
		debug \
		release


debug: FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall
release: FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall

Makefile: MediaManager.pro E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/win32-g++/qmake.conf E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/spec_pre.prf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/device_config.prf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/common/sanitize.conf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/common/gcc-base.conf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/common/g++-base.conf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/win32/windows_vulkan_sdk.prf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/common/windows-vulkan.conf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/common/g++-win32.conf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/common/windows-desktop.conf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/qconfig.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_ext_freetype.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_ext_libjpeg.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_ext_libpng.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_concurrent.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_concurrent_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_core.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_core_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_dbus.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_dbus_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_designer.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_designer_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_designercomponents_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_devicediscovery_support_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_entrypoint_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_fb_support_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_freetype_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_gui.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_gui_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_harfbuzz_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_help.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_help_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_jpeg_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_labsanimation.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_labsanimation_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_labsfolderlistmodel.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_labsfolderlistmodel_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_labsqmlmodels.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_labsqmlmodels_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_labssettings.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_labssettings_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_labssharedimage.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_labssharedimage_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_labswavefrontmesh.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_labswavefrontmesh_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_linguist.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_linguist_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_network.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_network_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_opengl.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_opengl_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_openglwidgets.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_openglwidgets_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_packetprotocol_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_png_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_printsupport.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_printsupport_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qml.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qml_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmlcompiler_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmlcore.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmlcore_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmldebug_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmldom_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmlintegration.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmlintegration_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmllocalstorage.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmllocalstorage_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmlmodels.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmlmodels_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmltest.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmltest_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmlworkerscript.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmlworkerscript_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmlxmllistmodel.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmlxmllistmodel_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quick.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quick_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quickcontrols2.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quickcontrols2_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quickcontrols2impl.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quickcontrols2impl_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quickcontrolstestutilsprivate_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2quickimpl.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2quickimpl_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2utils.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2utils_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quicklayouts.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quicklayouts_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quickparticles_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quickshapes_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quicktemplates2.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quicktemplates2_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quicktestutilsprivate_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quickwidgets.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_sql.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_sql_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_svg.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_svg_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_svgwidgets.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_svgwidgets_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_testlib.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_testlib_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_tools_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_uiplugin.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_uitools.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_uitools_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_widgets.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_widgets_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_xml.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_xml_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_zlib_private.pri \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/qt_functions.prf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/qt_config.prf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/win32-g++/qmake.conf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/spec_post.prf \
		.qmake.stash \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/exclusive_builds.prf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/toolchain.prf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/default_pre.prf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/win32/default_pre.prf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/resolve_config.prf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/exclusive_builds_post.prf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/default_post.prf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/qml_debug.prf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/entrypoint.prf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/precompile_header.prf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/warn_on.prf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/qt.prf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/resources_functions.prf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/resources.prf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/moc.prf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/win32/opengl.prf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/uic.prf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/qmake_use.prf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/file_copies.prf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/win32/windows.prf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/testcase_targets.prf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/exceptions.prf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/yacc.prf \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/lex.prf \
		MediaManager.pro \
		E:/Programfiles/qt/6.4.1/mingw_64/lib/Qt6Widgets.prl \
		E:/Programfiles/qt/6.4.1/mingw_64/lib/Qt6Gui.prl \
		E:/Programfiles/qt/6.4.1/mingw_64/lib/Qt6Core.prl \
		E:/Programfiles/qt/6.4.1/mingw_64/lib/Qt6EntryPoint.prl \
		E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/build_pass.prf \
		assets.qrc
	$(QMAKE) -o Makefile MediaManager.pro -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug"
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/spec_pre.prf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/device_config.prf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/common/sanitize.conf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/common/gcc-base.conf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/common/g++-base.conf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/win32/windows_vulkan_sdk.prf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/common/windows-vulkan.conf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/common/g++-win32.conf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/common/windows-desktop.conf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/qconfig.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_ext_freetype.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_ext_libjpeg.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_ext_libpng.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_concurrent.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_concurrent_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_core.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_core_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_dbus.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_dbus_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_designer.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_designer_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_designercomponents_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_devicediscovery_support_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_entrypoint_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_fb_support_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_freetype_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_gui.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_gui_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_harfbuzz_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_help.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_help_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_jpeg_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_labsanimation.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_labsanimation_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_labsfolderlistmodel.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_labsfolderlistmodel_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_labsqmlmodels.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_labsqmlmodels_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_labssettings.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_labssettings_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_labssharedimage.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_labssharedimage_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_labswavefrontmesh.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_labswavefrontmesh_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_linguist.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_linguist_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_network.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_network_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_opengl.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_opengl_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_openglwidgets.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_openglwidgets_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_packetprotocol_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_png_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_printsupport.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_printsupport_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qml.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qml_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmlcompiler_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmlcore.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmlcore_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmldebug_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmldom_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmlintegration.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmlintegration_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmllocalstorage.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmllocalstorage_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmlmodels.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmlmodels_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmltest.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmltest_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmlworkerscript.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmlworkerscript_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmlxmllistmodel.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_qmlxmllistmodel_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quick.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quick_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quickcontrols2.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quickcontrols2_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quickcontrols2impl.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quickcontrols2impl_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quickcontrolstestutilsprivate_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2quickimpl.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2quickimpl_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2utils.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quickdialogs2utils_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quicklayouts.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quicklayouts_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quickparticles_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quickshapes_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quicktemplates2.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quicktemplates2_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quicktestutilsprivate_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quickwidgets.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_quickwidgets_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_sql.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_sql_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_svg.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_svg_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_svgwidgets.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_svgwidgets_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_testlib.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_testlib_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_tools_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_uiplugin.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_uitools.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_uitools_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_widgets.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_widgets_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_xml.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_xml_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/modules/qt_lib_zlib_private.pri:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/qt_functions.prf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/qt_config.prf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/win32-g++/qmake.conf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/spec_post.prf:
.qmake.stash:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/exclusive_builds.prf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/toolchain.prf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/default_pre.prf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/win32/default_pre.prf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/resolve_config.prf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/exclusive_builds_post.prf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/default_post.prf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/qml_debug.prf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/entrypoint.prf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/precompile_header.prf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/warn_on.prf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/qt.prf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/resources_functions.prf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/resources.prf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/moc.prf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/win32/opengl.prf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/uic.prf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/qmake_use.prf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/file_copies.prf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/win32/windows.prf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/testcase_targets.prf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/exceptions.prf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/yacc.prf:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/lex.prf:
MediaManager.pro:
E:/Programfiles/qt/6.4.1/mingw_64/lib/Qt6Widgets.prl:
E:/Programfiles/qt/6.4.1/mingw_64/lib/Qt6Gui.prl:
E:/Programfiles/qt/6.4.1/mingw_64/lib/Qt6Core.prl:
E:/Programfiles/qt/6.4.1/mingw_64/lib/Qt6EntryPoint.prl:
E:/Programfiles/qt/6.4.1/mingw_64/mkspecs/features/build_pass.prf:
assets.qrc:
qmake: FORCE
	@$(QMAKE) -o Makefile MediaManager.pro -spec win32-g++ "CONFIG+=debug" "CONFIG+=qml_debug"

qmake_all: FORCE

make_first: debug-make_first release-make_first  FORCE
all: debug-all release-all  FORCE
clean: debug-clean release-clean  FORCE
distclean: debug-distclean release-distclean  FORCE
	-$(DEL_FILE) Makefile
	-$(DEL_FILE) .qmake.stash

debug-mocclean:
	$(MAKE) -f $(MAKEFILE).Debug mocclean
release-mocclean:
	$(MAKE) -f $(MAKEFILE).Release mocclean
mocclean: debug-mocclean release-mocclean

debug-mocables:
	$(MAKE) -f $(MAKEFILE).Debug mocables
release-mocables:
	$(MAKE) -f $(MAKEFILE).Release mocables
mocables: debug-mocables release-mocables

check: first

benchmark: first
FORCE:

.SUFFIXES:

$(MAKEFILE).Debug: Makefile
$(MAKEFILE).Release: Makefile
