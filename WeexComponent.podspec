#
# Be sure to run `pod lib lint WeexComponent.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'WeexComponent'
  s.version          = '0.1.0'
  s.summary          = 'create a new weex project easily.'
  s.description      = <<-DESC
 Weex component is a framework whitch can easily create a new weex project.
                       DESC

  s.homepage         = 'https://github.com/hujewelz/WeexComponent'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'huluobo' => 'hujewelz@163.com' }
  s.source           = { :git => 'https://github.com/hujewelz/WeexComponent.git', :tag => s.version.to_s }

  s.ios.deployment_target = '9.0'
  s.vendored_frameworks = 'WeexComponent/Framework/WeexComponent.framework'
  s.dependency 'WeexSDK'
  s.dependency 'SWKit', '~> 1.2.0'
  s.dependency 'SDWebImage', '3.7.5'
  s.dependency 'SocketRocket', '0.4.2'
  s.dependency 'HUPhotoBrowser'
  s.dependency 'SWPayment'
  s.dependency 'Hotaru'
end
