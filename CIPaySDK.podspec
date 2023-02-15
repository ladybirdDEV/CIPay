#
# Be sure to run `pod lib lint CIPay.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'CIPaySDK'
  s.version          = '0.0.1'
  s.summary          = 'A short description of CIPaySDK.'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/ladybirdDEV/CIPay'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'yangbb' => 'yangbenben@corp-ci.com' }
  s.source           = { :git => 'https://github.com/ladybirdDEV/CIPay.git', :tag => s.version.to_s }
  
  s.swift_version = '5.0'
  s.ios.deployment_target = '13.0'
  
  s.pod_target_xcconfig = {
      'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  s.user_target_xcconfig = {
      'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  s.static_framework = true

  # s.resource_bundles = {
  #   'TestDemo' => ['TestDemo/Assets/*.png']
  # }

  s.vendored_frameworks = "CIPay/CIPaySDK.framework"
  
  s.dependency 'StripePaymentSheet', '23.3.1'
end
