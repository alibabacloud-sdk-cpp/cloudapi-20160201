// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CLOUDAPI20160201_H_
#define ALIBABACLOUD_CLOUDAPI20160201_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_CloudAPI20160201 {
class AbolishApiRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> groupId{};
  shared_ptr<string> stageName{};

  AbolishApiRequest() {}

  explicit AbolishApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~AbolishApiRequest() = default;
};
class AbolishApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AbolishApiResponseBody() {}

  explicit AbolishApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AbolishApiResponseBody() = default;
};
class AbolishApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AbolishApiResponseBody> body{};

  AbolishApiResponse() {}

  explicit AbolishApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AbolishApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AbolishApiResponseBody>(model1);
      }
    }
  }


  virtual ~AbolishApiResponse() = default;
};
class AbolishApiForInnerRequest : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> apiId{};
  shared_ptr<string> groupId{};
  shared_ptr<string> stageName{};

  AbolishApiForInnerRequest() {}

  explicit AbolishApiForInnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~AbolishApiForInnerRequest() = default;
};
class AbolishApiForInnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AbolishApiForInnerResponseBody() {}

  explicit AbolishApiForInnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AbolishApiForInnerResponseBody() = default;
};
class AbolishApiForInnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AbolishApiForInnerResponseBody> body{};

  AbolishApiForInnerResponse() {}

  explicit AbolishApiForInnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AbolishApiForInnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AbolishApiForInnerResponseBody>(model1);
      }
    }
  }


  virtual ~AbolishApiForInnerResponse() = default;
};
class AddBlackListRequest : public Darabonba::Model {
public:
  shared_ptr<string> blackContent{};
  shared_ptr<string> blackType{};
  shared_ptr<string> description{};

  AddBlackListRequest() {}

  explicit AddBlackListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blackContent) {
      res["BlackContent"] = boost::any(*blackContent);
    }
    if (blackType) {
      res["BlackType"] = boost::any(*blackType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlackContent") != m.end() && !m["BlackContent"].empty()) {
      blackContent = make_shared<string>(boost::any_cast<string>(m["BlackContent"]));
    }
    if (m.find("BlackType") != m.end() && !m["BlackType"].empty()) {
      blackType = make_shared<string>(boost::any_cast<string>(m["BlackType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~AddBlackListRequest() = default;
};
class AddBlackListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddBlackListResponseBody() {}

  explicit AddBlackListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddBlackListResponseBody() = default;
};
class AddBlackListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddBlackListResponseBody> body{};

  AddBlackListResponse() {}

  explicit AddBlackListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddBlackListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddBlackListResponseBody>(model1);
      }
    }
  }


  virtual ~AddBlackListResponse() = default;
};
class AddTrafficSpecialControlRequest : public Darabonba::Model {
public:
  shared_ptr<string> specialKey{};
  shared_ptr<string> specialType{};
  shared_ptr<string> trafficControlId{};
  shared_ptr<long> trafficValue{};

  AddTrafficSpecialControlRequest() {}

  explicit AddTrafficSpecialControlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (specialKey) {
      res["SpecialKey"] = boost::any(*specialKey);
    }
    if (specialType) {
      res["SpecialType"] = boost::any(*specialType);
    }
    if (trafficControlId) {
      res["TrafficControlId"] = boost::any(*trafficControlId);
    }
    if (trafficValue) {
      res["TrafficValue"] = boost::any(*trafficValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpecialKey") != m.end() && !m["SpecialKey"].empty()) {
      specialKey = make_shared<string>(boost::any_cast<string>(m["SpecialKey"]));
    }
    if (m.find("SpecialType") != m.end() && !m["SpecialType"].empty()) {
      specialType = make_shared<string>(boost::any_cast<string>(m["SpecialType"]));
    }
    if (m.find("TrafficControlId") != m.end() && !m["TrafficControlId"].empty()) {
      trafficControlId = make_shared<string>(boost::any_cast<string>(m["TrafficControlId"]));
    }
    if (m.find("TrafficValue") != m.end() && !m["TrafficValue"].empty()) {
      trafficValue = make_shared<long>(boost::any_cast<long>(m["TrafficValue"]));
    }
  }


  virtual ~AddTrafficSpecialControlRequest() = default;
};
class AddTrafficSpecialControlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddTrafficSpecialControlResponseBody() {}

  explicit AddTrafficSpecialControlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AddTrafficSpecialControlResponseBody() = default;
};
class AddTrafficSpecialControlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddTrafficSpecialControlResponseBody> body{};

  AddTrafficSpecialControlResponse() {}

  explicit AddTrafficSpecialControlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddTrafficSpecialControlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddTrafficSpecialControlResponseBody>(model1);
      }
    }
  }


  virtual ~AddTrafficSpecialControlResponse() = default;
};
class CheckAccountForInnerRequest : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};

  CheckAccountForInnerRequest() {}

  explicit CheckAccountForInnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
  }


  virtual ~CheckAccountForInnerRequest() = default;
};
class CheckAccountForInnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> checkResult{};
  shared_ptr<string> requestId{};

  CheckAccountForInnerResponseBody() {}

  explicit CheckAccountForInnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkResult) {
      res["CheckResult"] = boost::any(*checkResult);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckResult") != m.end() && !m["CheckResult"].empty()) {
      checkResult = make_shared<bool>(boost::any_cast<bool>(m["CheckResult"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckAccountForInnerResponseBody() = default;
};
class CheckAccountForInnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckAccountForInnerResponseBody> body{};

  CheckAccountForInnerResponse() {}

  explicit CheckAccountForInnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckAccountForInnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckAccountForInnerResponseBody>(model1);
      }
    }
  }


  virtual ~CheckAccountForInnerResponse() = default;
};
class CheckAoneAppAuditRequest : public Darabonba::Model {
public:
  shared_ptr<string> aoneAppName{};

  CheckAoneAppAuditRequest() {}

  explicit CheckAoneAppAuditRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aoneAppName) {
      res["AoneAppName"] = boost::any(*aoneAppName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AoneAppName") != m.end() && !m["AoneAppName"].empty()) {
      aoneAppName = make_shared<string>(boost::any_cast<string>(m["AoneAppName"]));
    }
  }


  virtual ~CheckAoneAppAuditRequest() = default;
};
class CheckAoneAppAuditResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> checkResult{};
  shared_ptr<string> requestId{};

  CheckAoneAppAuditResponseBody() {}

  explicit CheckAoneAppAuditResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkResult) {
      res["CheckResult"] = boost::any(*checkResult);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckResult") != m.end() && !m["CheckResult"].empty()) {
      checkResult = make_shared<bool>(boost::any_cast<bool>(m["CheckResult"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CheckAoneAppAuditResponseBody() = default;
};
class CheckAoneAppAuditResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckAoneAppAuditResponseBody> body{};

  CheckAoneAppAuditResponse() {}

  explicit CheckAoneAppAuditResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckAoneAppAuditResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckAoneAppAuditResponseBody>(model1);
      }
    }
  }


  virtual ~CheckAoneAppAuditResponse() = default;
};
class CopyConsumerOpenForInnerRequest : public Darabonba::Model {
public:
  shared_ptr<string> copyList{};

  CopyConsumerOpenForInnerRequest() {}

  explicit CopyConsumerOpenForInnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (copyList) {
      res["CopyList"] = boost::any(*copyList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CopyList") != m.end() && !m["CopyList"].empty()) {
      copyList = make_shared<string>(boost::any_cast<string>(m["CopyList"]));
    }
  }


  virtual ~CopyConsumerOpenForInnerRequest() = default;
};
class CopyConsumerOpenForInnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CopyConsumerOpenForInnerResponseBody() {}

  explicit CopyConsumerOpenForInnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CopyConsumerOpenForInnerResponseBody() = default;
};
class CopyConsumerOpenForInnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CopyConsumerOpenForInnerResponseBody> body{};

  CopyConsumerOpenForInnerResponse() {}

  explicit CopyConsumerOpenForInnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CopyConsumerOpenForInnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CopyConsumerOpenForInnerResponseBody>(model1);
      }
    }
  }


  virtual ~CopyConsumerOpenForInnerResponse() = default;
};
class CreateApiRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiName{};
  shared_ptr<string> authType{};
  shared_ptr<string> bodyFormat{};
  shared_ptr<string> constantParameters{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> httpMethod{};
  shared_ptr<string> httpProtocol{};
  shared_ptr<string> path{};
  shared_ptr<string> pathParameters{};
  shared_ptr<string> postBodyDescription{};
  shared_ptr<string> postBodyType{};
  shared_ptr<string> requestBody{};
  shared_ptr<string> requestHeaders{};
  shared_ptr<string> requestQueries{};
  shared_ptr<string> resultSample{};
  shared_ptr<string> resultType{};
  shared_ptr<string> serviceAddress{};
  shared_ptr<string> serviceProtocol{};
  shared_ptr<long> serviceTimeout{};
  shared_ptr<string> systemParameters{};
  shared_ptr<string> visibility{};

  CreateApiRequest() {}

  explicit CreateApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (authType) {
      res["AuthType"] = boost::any(*authType);
    }
    if (bodyFormat) {
      res["BodyFormat"] = boost::any(*bodyFormat);
    }
    if (constantParameters) {
      res["ConstantParameters"] = boost::any(*constantParameters);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (httpMethod) {
      res["HttpMethod"] = boost::any(*httpMethod);
    }
    if (httpProtocol) {
      res["HttpProtocol"] = boost::any(*httpProtocol);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (pathParameters) {
      res["PathParameters"] = boost::any(*pathParameters);
    }
    if (postBodyDescription) {
      res["PostBodyDescription"] = boost::any(*postBodyDescription);
    }
    if (postBodyType) {
      res["PostBodyType"] = boost::any(*postBodyType);
    }
    if (requestBody) {
      res["RequestBody"] = boost::any(*requestBody);
    }
    if (requestHeaders) {
      res["RequestHeaders"] = boost::any(*requestHeaders);
    }
    if (requestQueries) {
      res["RequestQueries"] = boost::any(*requestQueries);
    }
    if (resultSample) {
      res["ResultSample"] = boost::any(*resultSample);
    }
    if (resultType) {
      res["ResultType"] = boost::any(*resultType);
    }
    if (serviceAddress) {
      res["ServiceAddress"] = boost::any(*serviceAddress);
    }
    if (serviceProtocol) {
      res["ServiceProtocol"] = boost::any(*serviceProtocol);
    }
    if (serviceTimeout) {
      res["ServiceTimeout"] = boost::any(*serviceTimeout);
    }
    if (systemParameters) {
      res["SystemParameters"] = boost::any(*systemParameters);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("AuthType") != m.end() && !m["AuthType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["AuthType"]));
    }
    if (m.find("BodyFormat") != m.end() && !m["BodyFormat"].empty()) {
      bodyFormat = make_shared<string>(boost::any_cast<string>(m["BodyFormat"]));
    }
    if (m.find("ConstantParameters") != m.end() && !m["ConstantParameters"].empty()) {
      constantParameters = make_shared<string>(boost::any_cast<string>(m["ConstantParameters"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("HttpMethod") != m.end() && !m["HttpMethod"].empty()) {
      httpMethod = make_shared<string>(boost::any_cast<string>(m["HttpMethod"]));
    }
    if (m.find("HttpProtocol") != m.end() && !m["HttpProtocol"].empty()) {
      httpProtocol = make_shared<string>(boost::any_cast<string>(m["HttpProtocol"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("PathParameters") != m.end() && !m["PathParameters"].empty()) {
      pathParameters = make_shared<string>(boost::any_cast<string>(m["PathParameters"]));
    }
    if (m.find("PostBodyDescription") != m.end() && !m["PostBodyDescription"].empty()) {
      postBodyDescription = make_shared<string>(boost::any_cast<string>(m["PostBodyDescription"]));
    }
    if (m.find("PostBodyType") != m.end() && !m["PostBodyType"].empty()) {
      postBodyType = make_shared<string>(boost::any_cast<string>(m["PostBodyType"]));
    }
    if (m.find("RequestBody") != m.end() && !m["RequestBody"].empty()) {
      requestBody = make_shared<string>(boost::any_cast<string>(m["RequestBody"]));
    }
    if (m.find("RequestHeaders") != m.end() && !m["RequestHeaders"].empty()) {
      requestHeaders = make_shared<string>(boost::any_cast<string>(m["RequestHeaders"]));
    }
    if (m.find("RequestQueries") != m.end() && !m["RequestQueries"].empty()) {
      requestQueries = make_shared<string>(boost::any_cast<string>(m["RequestQueries"]));
    }
    if (m.find("ResultSample") != m.end() && !m["ResultSample"].empty()) {
      resultSample = make_shared<string>(boost::any_cast<string>(m["ResultSample"]));
    }
    if (m.find("ResultType") != m.end() && !m["ResultType"].empty()) {
      resultType = make_shared<string>(boost::any_cast<string>(m["ResultType"]));
    }
    if (m.find("ServiceAddress") != m.end() && !m["ServiceAddress"].empty()) {
      serviceAddress = make_shared<string>(boost::any_cast<string>(m["ServiceAddress"]));
    }
    if (m.find("ServiceProtocol") != m.end() && !m["ServiceProtocol"].empty()) {
      serviceProtocol = make_shared<string>(boost::any_cast<string>(m["ServiceProtocol"]));
    }
    if (m.find("ServiceTimeout") != m.end() && !m["ServiceTimeout"].empty()) {
      serviceTimeout = make_shared<long>(boost::any_cast<long>(m["ServiceTimeout"]));
    }
    if (m.find("SystemParameters") != m.end() && !m["SystemParameters"].empty()) {
      systemParameters = make_shared<string>(boost::any_cast<string>(m["SystemParameters"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~CreateApiRequest() = default;
};
class CreateApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> requestId{};

  CreateApiResponseBody() {}

  explicit CreateApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateApiResponseBody() = default;
};
class CreateApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateApiResponseBody> body{};

  CreateApiResponse() {}

  explicit CreateApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateApiResponseBody>(model1);
      }
    }
  }


  virtual ~CreateApiResponse() = default;
};
class CreateApiForInnerRequest : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> apiName{};
  shared_ptr<string> authType{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> requestConfig{};
  shared_ptr<string> requestParamters{};
  shared_ptr<string> resultSample{};
  shared_ptr<string> resultType{};
  shared_ptr<string> serviceConfig{};
  shared_ptr<string> serviceParameters{};
  shared_ptr<string> serviceParametersMap{};
  shared_ptr<string> visibility{};

  CreateApiForInnerRequest() {}

  explicit CreateApiForInnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (authType) {
      res["AuthType"] = boost::any(*authType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (requestConfig) {
      res["RequestConfig"] = boost::any(*requestConfig);
    }
    if (requestParamters) {
      res["RequestParamters"] = boost::any(*requestParamters);
    }
    if (resultSample) {
      res["ResultSample"] = boost::any(*resultSample);
    }
    if (resultType) {
      res["ResultType"] = boost::any(*resultType);
    }
    if (serviceConfig) {
      res["ServiceConfig"] = boost::any(*serviceConfig);
    }
    if (serviceParameters) {
      res["ServiceParameters"] = boost::any(*serviceParameters);
    }
    if (serviceParametersMap) {
      res["ServiceParametersMap"] = boost::any(*serviceParametersMap);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("AuthType") != m.end() && !m["AuthType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["AuthType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("RequestConfig") != m.end() && !m["RequestConfig"].empty()) {
      requestConfig = make_shared<string>(boost::any_cast<string>(m["RequestConfig"]));
    }
    if (m.find("RequestParamters") != m.end() && !m["RequestParamters"].empty()) {
      requestParamters = make_shared<string>(boost::any_cast<string>(m["RequestParamters"]));
    }
    if (m.find("ResultSample") != m.end() && !m["ResultSample"].empty()) {
      resultSample = make_shared<string>(boost::any_cast<string>(m["ResultSample"]));
    }
    if (m.find("ResultType") != m.end() && !m["ResultType"].empty()) {
      resultType = make_shared<string>(boost::any_cast<string>(m["ResultType"]));
    }
    if (m.find("ServiceConfig") != m.end() && !m["ServiceConfig"].empty()) {
      serviceConfig = make_shared<string>(boost::any_cast<string>(m["ServiceConfig"]));
    }
    if (m.find("ServiceParameters") != m.end() && !m["ServiceParameters"].empty()) {
      serviceParameters = make_shared<string>(boost::any_cast<string>(m["ServiceParameters"]));
    }
    if (m.find("ServiceParametersMap") != m.end() && !m["ServiceParametersMap"].empty()) {
      serviceParametersMap = make_shared<string>(boost::any_cast<string>(m["ServiceParametersMap"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~CreateApiForInnerRequest() = default;
};
class CreateApiForInnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> requestId{};

  CreateApiForInnerResponseBody() {}

  explicit CreateApiForInnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateApiForInnerResponseBody() = default;
};
class CreateApiForInnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateApiForInnerResponseBody> body{};

  CreateApiForInnerResponse() {}

  explicit CreateApiForInnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateApiForInnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateApiForInnerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateApiForInnerResponse() = default;
};
class CreateApiGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> groupName{};
  shared_ptr<string> securityToken{};

  CreateApiGroupRequest() {}

  explicit CreateApiGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~CreateApiGroupRequest() = default;
};
class CreateApiGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subDomain{};

  CreateApiGroupResponseBody() {}

  explicit CreateApiGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subDomain) {
      res["SubDomain"] = boost::any(*subDomain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubDomain") != m.end() && !m["SubDomain"].empty()) {
      subDomain = make_shared<string>(boost::any_cast<string>(m["SubDomain"]));
    }
  }


  virtual ~CreateApiGroupResponseBody() = default;
};
class CreateApiGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateApiGroupResponseBody> body{};

  CreateApiGroupResponse() {}

  explicit CreateApiGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateApiGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateApiGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateApiGroupResponse() = default;
};
class CreateApiGroupForInnerRequest : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> description{};
  shared_ptr<string> groupName{};
  shared_ptr<string> source{};

  CreateApiGroupForInnerRequest() {}

  explicit CreateApiGroupForInnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~CreateApiGroupForInnerRequest() = default;
};
class CreateApiGroupForInnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subDomain{};

  CreateApiGroupForInnerResponseBody() {}

  explicit CreateApiGroupForInnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subDomain) {
      res["SubDomain"] = boost::any(*subDomain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubDomain") != m.end() && !m["SubDomain"].empty()) {
      subDomain = make_shared<string>(boost::any_cast<string>(m["SubDomain"]));
    }
  }


  virtual ~CreateApiGroupForInnerResponseBody() = default;
};
class CreateApiGroupForInnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateApiGroupForInnerResponseBody> body{};

  CreateApiGroupForInnerResponse() {}

  explicit CreateApiGroupForInnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateApiGroupForInnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateApiGroupForInnerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateApiGroupForInnerResponse() = default;
};
class CreateAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> description{};

  CreateAppRequest() {}

  explicit CreateAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~CreateAppRequest() = default;
};
class CreateAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> appId{};
  shared_ptr<string> requestId{};

  CreateAppResponseBody() {}

  explicit CreateAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAppResponseBody() = default;
};
class CreateAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAppResponseBody> body{};

  CreateAppResponse() {}

  explicit CreateAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppResponse() = default;
};
class CreateAppForBackendRequest : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> appName{};
  shared_ptr<string> description{};
  shared_ptr<string> source{};

  CreateAppForBackendRequest() {}

  explicit CreateAppForBackendRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~CreateAppForBackendRequest() = default;
};
class CreateAppForBackendResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> appId{};
  shared_ptr<string> requestId{};

  CreateAppForBackendResponseBody() {}

  explicit CreateAppForBackendResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAppForBackendResponseBody() = default;
};
class CreateAppForBackendResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAppForBackendResponseBody> body{};

  CreateAppForBackendResponse() {}

  explicit CreateAppForBackendResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateAppForBackendResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppForBackendResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppForBackendResponse() = default;
};
class CreateAppForInnerRequest : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> appCode{};
  shared_ptr<string> appKey{};
  shared_ptr<string> appName{};
  shared_ptr<string> appSecret{};
  shared_ptr<string> description{};
  shared_ptr<string> extend{};
  shared_ptr<string> source{};

  CreateAppForInnerRequest() {}

  explicit CreateAppForInnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (appCode) {
      res["AppCode"] = boost::any(*appCode);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appSecret) {
      res["AppSecret"] = boost::any(*appSecret);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (extend) {
      res["Extend"] = boost::any(*extend);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("AppCode") != m.end() && !m["AppCode"].empty()) {
      appCode = make_shared<string>(boost::any_cast<string>(m["AppCode"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppSecret") != m.end() && !m["AppSecret"].empty()) {
      appSecret = make_shared<string>(boost::any_cast<string>(m["AppSecret"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Extend") != m.end() && !m["Extend"].empty()) {
      extend = make_shared<string>(boost::any_cast<string>(m["Extend"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~CreateAppForInnerRequest() = default;
};
class CreateAppForInnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> appId{};
  shared_ptr<string> requestId{};

  CreateAppForInnerResponseBody() {}

  explicit CreateAppForInnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAppForInnerResponseBody() = default;
};
class CreateAppForInnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAppForInnerResponseBody> body{};

  CreateAppForInnerResponse() {}

  explicit CreateAppForInnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateAppForInnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppForInnerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppForInnerResponse() = default;
};
class CreateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> accountQuantity{};
  shared_ptr<long> alarmQuota{};
  shared_ptr<long> aliUid{};
  shared_ptr<long> appId{};
  shared_ptr<string> billingType{};
  shared_ptr<string> cloudMarketInstanceId{};
  shared_ptr<string> expiredOn{};
  shared_ptr<string> instanceAttributes{};
  shared_ptr<string> skuId{};
  shared_ptr<string> token{};

  CreateInstanceRequest() {}

  explicit CreateInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountQuantity) {
      res["AccountQuantity"] = boost::any(*accountQuantity);
    }
    if (alarmQuota) {
      res["AlarmQuota"] = boost::any(*alarmQuota);
    }
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (billingType) {
      res["BillingType"] = boost::any(*billingType);
    }
    if (cloudMarketInstanceId) {
      res["CloudMarketInstanceId"] = boost::any(*cloudMarketInstanceId);
    }
    if (expiredOn) {
      res["ExpiredOn"] = boost::any(*expiredOn);
    }
    if (instanceAttributes) {
      res["InstanceAttributes"] = boost::any(*instanceAttributes);
    }
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountQuantity") != m.end() && !m["AccountQuantity"].empty()) {
      accountQuantity = make_shared<long>(boost::any_cast<long>(m["AccountQuantity"]));
    }
    if (m.find("AlarmQuota") != m.end() && !m["AlarmQuota"].empty()) {
      alarmQuota = make_shared<long>(boost::any_cast<long>(m["AlarmQuota"]));
    }
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("BillingType") != m.end() && !m["BillingType"].empty()) {
      billingType = make_shared<string>(boost::any_cast<string>(m["BillingType"]));
    }
    if (m.find("CloudMarketInstanceId") != m.end() && !m["CloudMarketInstanceId"].empty()) {
      cloudMarketInstanceId = make_shared<string>(boost::any_cast<string>(m["CloudMarketInstanceId"]));
    }
    if (m.find("ExpiredOn") != m.end() && !m["ExpiredOn"].empty()) {
      expiredOn = make_shared<string>(boost::any_cast<string>(m["ExpiredOn"]));
    }
    if (m.find("InstanceAttributes") != m.end() && !m["InstanceAttributes"].empty()) {
      instanceAttributes = make_shared<string>(boost::any_cast<string>(m["InstanceAttributes"]));
    }
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<string>(boost::any_cast<string>(m["SkuId"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~CreateInstanceRequest() = default;
};
class CreateInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestId{};

  CreateInstanceResponseBody() {}

  explicit CreateInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateInstanceResponseBody() = default;
};
class CreateInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateInstanceResponseBody> body{};

  CreateInstanceResponse() {}

  explicit CreateInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceResponse() = default;
};
class CreateRaceWorkForInnerRequest : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<string> groupId{};
  shared_ptr<string> keywords{};
  shared_ptr<string> logoUrl{};
  shared_ptr<string> shortDescription{};
  shared_ptr<string> workName{};

  CreateRaceWorkForInnerRequest() {}

  explicit CreateRaceWorkForInnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (keywords) {
      res["Keywords"] = boost::any(*keywords);
    }
    if (logoUrl) {
      res["LogoUrl"] = boost::any(*logoUrl);
    }
    if (shortDescription) {
      res["ShortDescription"] = boost::any(*shortDescription);
    }
    if (workName) {
      res["WorkName"] = boost::any(*workName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Keywords") != m.end() && !m["Keywords"].empty()) {
      keywords = make_shared<string>(boost::any_cast<string>(m["Keywords"]));
    }
    if (m.find("LogoUrl") != m.end() && !m["LogoUrl"].empty()) {
      logoUrl = make_shared<string>(boost::any_cast<string>(m["LogoUrl"]));
    }
    if (m.find("ShortDescription") != m.end() && !m["ShortDescription"].empty()) {
      shortDescription = make_shared<string>(boost::any_cast<string>(m["ShortDescription"]));
    }
    if (m.find("WorkName") != m.end() && !m["WorkName"].empty()) {
      workName = make_shared<string>(boost::any_cast<string>(m["WorkName"]));
    }
  }


  virtual ~CreateRaceWorkForInnerRequest() = default;
};
class CreateRaceWorkForInnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateRaceWorkForInnerResponseBody() {}

  explicit CreateRaceWorkForInnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateRaceWorkForInnerResponseBody() = default;
};
class CreateRaceWorkForInnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRaceWorkForInnerResponseBody> body{};

  CreateRaceWorkForInnerResponse() {}

  explicit CreateRaceWorkForInnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateRaceWorkForInnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRaceWorkForInnerResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRaceWorkForInnerResponse() = default;
};
class CreateSecretKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> secretKey{};
  shared_ptr<string> secretKeyName{};
  shared_ptr<string> secretValue{};

  CreateSecretKeyRequest() {}

  explicit CreateSecretKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (secretKey) {
      res["SecretKey"] = boost::any(*secretKey);
    }
    if (secretKeyName) {
      res["SecretKeyName"] = boost::any(*secretKeyName);
    }
    if (secretValue) {
      res["SecretValue"] = boost::any(*secretValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecretKey") != m.end() && !m["SecretKey"].empty()) {
      secretKey = make_shared<string>(boost::any_cast<string>(m["SecretKey"]));
    }
    if (m.find("SecretKeyName") != m.end() && !m["SecretKeyName"].empty()) {
      secretKeyName = make_shared<string>(boost::any_cast<string>(m["SecretKeyName"]));
    }
    if (m.find("SecretValue") != m.end() && !m["SecretValue"].empty()) {
      secretValue = make_shared<string>(boost::any_cast<string>(m["SecretValue"]));
    }
  }


  virtual ~CreateSecretKeyRequest() = default;
};
class CreateSecretKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> secretKeyId{};
  shared_ptr<string> secretKeyName{};

  CreateSecretKeyResponseBody() {}

  explicit CreateSecretKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (secretKeyId) {
      res["SecretKeyId"] = boost::any(*secretKeyId);
    }
    if (secretKeyName) {
      res["SecretKeyName"] = boost::any(*secretKeyName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecretKeyId") != m.end() && !m["SecretKeyId"].empty()) {
      secretKeyId = make_shared<string>(boost::any_cast<string>(m["SecretKeyId"]));
    }
    if (m.find("SecretKeyName") != m.end() && !m["SecretKeyName"].empty()) {
      secretKeyName = make_shared<string>(boost::any_cast<string>(m["SecretKeyName"]));
    }
  }


  virtual ~CreateSecretKeyResponseBody() = default;
};
class CreateSecretKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSecretKeyResponseBody> body{};

  CreateSecretKeyResponse() {}

  explicit CreateSecretKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateSecretKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSecretKeyResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSecretKeyResponse() = default;
};
class CreateTrafficControlRequest : public Darabonba::Model {
public:
  shared_ptr<long> apiDefault{};
  shared_ptr<long> appDefault{};
  shared_ptr<string> description{};
  shared_ptr<string> trafficControlName{};
  shared_ptr<string> trafficControlUnit{};
  shared_ptr<long> userDefault{};

  CreateTrafficControlRequest() {}

  explicit CreateTrafficControlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiDefault) {
      res["ApiDefault"] = boost::any(*apiDefault);
    }
    if (appDefault) {
      res["AppDefault"] = boost::any(*appDefault);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (trafficControlName) {
      res["TrafficControlName"] = boost::any(*trafficControlName);
    }
    if (trafficControlUnit) {
      res["TrafficControlUnit"] = boost::any(*trafficControlUnit);
    }
    if (userDefault) {
      res["UserDefault"] = boost::any(*userDefault);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiDefault") != m.end() && !m["ApiDefault"].empty()) {
      apiDefault = make_shared<long>(boost::any_cast<long>(m["ApiDefault"]));
    }
    if (m.find("AppDefault") != m.end() && !m["AppDefault"].empty()) {
      appDefault = make_shared<long>(boost::any_cast<long>(m["AppDefault"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("TrafficControlName") != m.end() && !m["TrafficControlName"].empty()) {
      trafficControlName = make_shared<string>(boost::any_cast<string>(m["TrafficControlName"]));
    }
    if (m.find("TrafficControlUnit") != m.end() && !m["TrafficControlUnit"].empty()) {
      trafficControlUnit = make_shared<string>(boost::any_cast<string>(m["TrafficControlUnit"]));
    }
    if (m.find("UserDefault") != m.end() && !m["UserDefault"].empty()) {
      userDefault = make_shared<long>(boost::any_cast<long>(m["UserDefault"]));
    }
  }


  virtual ~CreateTrafficControlRequest() = default;
};
class CreateTrafficControlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> trafficControlId{};

  CreateTrafficControlResponseBody() {}

  explicit CreateTrafficControlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (trafficControlId) {
      res["TrafficControlId"] = boost::any(*trafficControlId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TrafficControlId") != m.end() && !m["TrafficControlId"].empty()) {
      trafficControlId = make_shared<string>(boost::any_cast<string>(m["TrafficControlId"]));
    }
  }


  virtual ~CreateTrafficControlResponseBody() = default;
};
class CreateTrafficControlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTrafficControlResponseBody> body{};

  CreateTrafficControlResponse() {}

  explicit CreateTrafficControlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateTrafficControlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTrafficControlResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTrafficControlResponse() = default;
};
class CreateUserWhiteListRequest : public Darabonba::Model {
public:
  shared_ptr<string> aoneId{};
  shared_ptr<string> description{};
  shared_ptr<string> entityId{};
  shared_ptr<long> limitCount{};
  shared_ptr<string> type{};
  shared_ptr<long> uid{};
  shared_ptr<string> value{};

  CreateUserWhiteListRequest() {}

  explicit CreateUserWhiteListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aoneId) {
      res["AoneId"] = boost::any(*aoneId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (limitCount) {
      res["LimitCount"] = boost::any(*limitCount);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AoneId") != m.end() && !m["AoneId"].empty()) {
      aoneId = make_shared<string>(boost::any_cast<string>(m["AoneId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("LimitCount") != m.end() && !m["LimitCount"].empty()) {
      limitCount = make_shared<long>(boost::any_cast<long>(m["LimitCount"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateUserWhiteListRequest() = default;
};
class CreateUserWhiteListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateUserWhiteListResponseBody() {}

  explicit CreateUserWhiteListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateUserWhiteListResponseBody() = default;
};
class CreateUserWhiteListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateUserWhiteListResponseBody> body{};

  CreateUserWhiteListResponse() {}

  explicit CreateUserWhiteListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateUserWhiteListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateUserWhiteListResponseBody>(model1);
      }
    }
  }


  virtual ~CreateUserWhiteListResponse() = default;
};
class DeleteAllTrafficSpecialControlRequest : public Darabonba::Model {
public:
  shared_ptr<string> trafficControlId{};

  DeleteAllTrafficSpecialControlRequest() {}

  explicit DeleteAllTrafficSpecialControlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (trafficControlId) {
      res["TrafficControlId"] = boost::any(*trafficControlId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TrafficControlId") != m.end() && !m["TrafficControlId"].empty()) {
      trafficControlId = make_shared<string>(boost::any_cast<string>(m["TrafficControlId"]));
    }
  }


  virtual ~DeleteAllTrafficSpecialControlRequest() = default;
};
class DeleteAllTrafficSpecialControlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAllTrafficSpecialControlResponseBody() {}

  explicit DeleteAllTrafficSpecialControlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteAllTrafficSpecialControlResponseBody() = default;
};
class DeleteAllTrafficSpecialControlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAllTrafficSpecialControlResponseBody> body{};

  DeleteAllTrafficSpecialControlResponse() {}

  explicit DeleteAllTrafficSpecialControlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteAllTrafficSpecialControlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAllTrafficSpecialControlResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAllTrafficSpecialControlResponse() = default;
};
class DeleteApiRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> groupId{};

  DeleteApiRequest() {}

  explicit DeleteApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
  }


  virtual ~DeleteApiRequest() = default;
};
class DeleteApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteApiResponseBody() {}

  explicit DeleteApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteApiResponseBody() = default;
};
class DeleteApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteApiResponseBody> body{};

  DeleteApiResponse() {}

  explicit DeleteApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteApiResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteApiResponse() = default;
};
class DeleteApiForInnerRequest : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> apiId{};
  shared_ptr<string> groupId{};

  DeleteApiForInnerRequest() {}

  explicit DeleteApiForInnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
  }


  virtual ~DeleteApiForInnerRequest() = default;
};
class DeleteApiForInnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteApiForInnerResponseBody() {}

  explicit DeleteApiForInnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteApiForInnerResponseBody() = default;
};
class DeleteApiForInnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteApiForInnerResponseBody> body{};

  DeleteApiForInnerResponse() {}

  explicit DeleteApiForInnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteApiForInnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteApiForInnerResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteApiForInnerResponse() = default;
};
class DeleteApiGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};

  DeleteApiGroupRequest() {}

  explicit DeleteApiGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
  }


  virtual ~DeleteApiGroupRequest() = default;
};
class DeleteApiGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteApiGroupResponseBody() {}

  explicit DeleteApiGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteApiGroupResponseBody() = default;
};
class DeleteApiGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteApiGroupResponseBody> body{};

  DeleteApiGroupResponse() {}

  explicit DeleteApiGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteApiGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteApiGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteApiGroupResponse() = default;
};
class DeleteAppRequest : public Darabonba::Model {
public:
  shared_ptr<long> appId{};

  DeleteAppRequest() {}

  explicit DeleteAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
  }


  virtual ~DeleteAppRequest() = default;
};
class DeleteAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAppResponseBody() {}

  explicit DeleteAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteAppResponseBody() = default;
};
class DeleteAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAppResponseBody> body{};

  DeleteAppResponse() {}

  explicit DeleteAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAppResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAppResponse() = default;
};
class DeleteAppForInnerRequest : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<long> appId{};

  DeleteAppForInnerRequest() {}

  explicit DeleteAppForInnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
  }


  virtual ~DeleteAppForInnerRequest() = default;
};
class DeleteAppForInnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteAppForInnerResponseBody() {}

  explicit DeleteAppForInnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteAppForInnerResponseBody() = default;
};
class DeleteAppForInnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteAppForInnerResponseBody> body{};

  DeleteAppForInnerResponse() {}

  explicit DeleteAppForInnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteAppForInnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteAppForInnerResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteAppForInnerResponse() = default;
};
class DeleteDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> groupId{};

  DeleteDomainRequest() {}

  explicit DeleteDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
  }


  virtual ~DeleteDomainRequest() = default;
};
class DeleteDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDomainResponseBody() {}

  explicit DeleteDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDomainResponseBody() = default;
};
class DeleteDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDomainResponseBody> body{};

  DeleteDomainResponse() {}

  explicit DeleteDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDomainResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDomainResponse() = default;
};
class DeleteDomainCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};
  shared_ptr<string> domainName{};
  shared_ptr<string> groupId{};

  DeleteDomainCertificateRequest() {}

  explicit DeleteDomainCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
  }


  virtual ~DeleteDomainCertificateRequest() = default;
};
class DeleteDomainCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDomainCertificateResponseBody() {}

  explicit DeleteDomainCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDomainCertificateResponseBody() = default;
};
class DeleteDomainCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDomainCertificateResponseBody> body{};

  DeleteDomainCertificateResponse() {}

  explicit DeleteDomainCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteDomainCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDomainCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDomainCertificateResponse() = default;
};
class DeleteSecretKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> secretKeyId{};

  DeleteSecretKeyRequest() {}

  explicit DeleteSecretKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (secretKeyId) {
      res["SecretKeyId"] = boost::any(*secretKeyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecretKeyId") != m.end() && !m["SecretKeyId"].empty()) {
      secretKeyId = make_shared<string>(boost::any_cast<string>(m["SecretKeyId"]));
    }
  }


  virtual ~DeleteSecretKeyRequest() = default;
};
class DeleteSecretKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteSecretKeyResponseBody() {}

  explicit DeleteSecretKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteSecretKeyResponseBody() = default;
};
class DeleteSecretKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSecretKeyResponseBody> body{};

  DeleteSecretKeyResponse() {}

  explicit DeleteSecretKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteSecretKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSecretKeyResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSecretKeyResponse() = default;
};
class DeleteTrafficControlRequest : public Darabonba::Model {
public:
  shared_ptr<string> trafficControlId{};

  DeleteTrafficControlRequest() {}

  explicit DeleteTrafficControlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (trafficControlId) {
      res["TrafficControlId"] = boost::any(*trafficControlId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TrafficControlId") != m.end() && !m["TrafficControlId"].empty()) {
      trafficControlId = make_shared<string>(boost::any_cast<string>(m["TrafficControlId"]));
    }
  }


  virtual ~DeleteTrafficControlRequest() = default;
};
class DeleteTrafficControlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteTrafficControlResponseBody() {}

  explicit DeleteTrafficControlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteTrafficControlResponseBody() = default;
};
class DeleteTrafficControlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteTrafficControlResponseBody> body{};

  DeleteTrafficControlResponse() {}

  explicit DeleteTrafficControlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteTrafficControlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTrafficControlResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTrafficControlResponse() = default;
};
class DeleteTrafficSpecialControlRequest : public Darabonba::Model {
public:
  shared_ptr<string> specialKey{};
  shared_ptr<string> specialType{};
  shared_ptr<string> trafficControlId{};

  DeleteTrafficSpecialControlRequest() {}

  explicit DeleteTrafficSpecialControlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (specialKey) {
      res["SpecialKey"] = boost::any(*specialKey);
    }
    if (specialType) {
      res["SpecialType"] = boost::any(*specialType);
    }
    if (trafficControlId) {
      res["TrafficControlId"] = boost::any(*trafficControlId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpecialKey") != m.end() && !m["SpecialKey"].empty()) {
      specialKey = make_shared<string>(boost::any_cast<string>(m["SpecialKey"]));
    }
    if (m.find("SpecialType") != m.end() && !m["SpecialType"].empty()) {
      specialType = make_shared<string>(boost::any_cast<string>(m["SpecialType"]));
    }
    if (m.find("TrafficControlId") != m.end() && !m["TrafficControlId"].empty()) {
      trafficControlId = make_shared<string>(boost::any_cast<string>(m["TrafficControlId"]));
    }
  }


  virtual ~DeleteTrafficSpecialControlRequest() = default;
};
class DeleteTrafficSpecialControlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteTrafficSpecialControlResponseBody() {}

  explicit DeleteTrafficSpecialControlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteTrafficSpecialControlResponseBody() = default;
};
class DeleteTrafficSpecialControlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteTrafficSpecialControlResponseBody> body{};

  DeleteTrafficSpecialControlResponse() {}

  explicit DeleteTrafficSpecialControlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteTrafficSpecialControlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTrafficSpecialControlResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTrafficSpecialControlResponse() = default;
};
class DeleteUserWhiteListByTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> entityId{};
  shared_ptr<string> type{};
  shared_ptr<long> uid{};

  DeleteUserWhiteListByTypeRequest() {}

  explicit DeleteUserWhiteListByTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
  }


  virtual ~DeleteUserWhiteListByTypeRequest() = default;
};
class DeleteUserWhiteListByTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteUserWhiteListByTypeResponseBody() {}

  explicit DeleteUserWhiteListByTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteUserWhiteListByTypeResponseBody() = default;
};
class DeleteUserWhiteListByTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUserWhiteListByTypeResponseBody> body{};

  DeleteUserWhiteListByTypeResponse() {}

  explicit DeleteUserWhiteListByTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteUserWhiteListByTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUserWhiteListByTypeResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUserWhiteListByTypeResponse() = default;
};
class DeployApiRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> stageName{};

  DeployApiRequest() {}

  explicit DeployApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~DeployApiRequest() = default;
};
class DeployApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeployApiResponseBody() {}

  explicit DeployApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeployApiResponseBody() = default;
};
class DeployApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeployApiResponseBody> body{};

  DeployApiResponse() {}

  explicit DeployApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeployApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeployApiResponseBody>(model1);
      }
    }
  }


  virtual ~DeployApiResponse() = default;
};
class DeployApiForInnerRequest : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> apiId{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> stageName{};

  DeployApiForInnerRequest() {}

  explicit DeployApiForInnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~DeployApiForInnerRequest() = default;
};
class DeployApiForInnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeployApiForInnerResponseBody() {}

  explicit DeployApiForInnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeployApiForInnerResponseBody() = default;
};
class DeployApiForInnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeployApiForInnerResponseBody> body{};

  DeployApiForInnerResponse() {}

  explicit DeployApiForInnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeployApiForInnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeployApiForInnerResponseBody>(model1);
      }
    }
  }


  virtual ~DeployApiForInnerResponse() = default;
};
class DescribeApiRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> groupId{};

  DescribeApiRequest() {}

  explicit DescribeApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
  }


  virtual ~DescribeApiRequest() = default;
};
class DescribeApiResponseBodyConstantParametersConstantParameter : public Darabonba::Model {
public:
  shared_ptr<string> constantValue{};
  shared_ptr<string> description{};
  shared_ptr<string> location{};
  shared_ptr<string> serviceParameterName{};

  DescribeApiResponseBodyConstantParametersConstantParameter() {}

  explicit DescribeApiResponseBodyConstantParametersConstantParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (constantValue) {
      res["ConstantValue"] = boost::any(*constantValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (serviceParameterName) {
      res["ServiceParameterName"] = boost::any(*serviceParameterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConstantValue") != m.end() && !m["ConstantValue"].empty()) {
      constantValue = make_shared<string>(boost::any_cast<string>(m["ConstantValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("ServiceParameterName") != m.end() && !m["ServiceParameterName"].empty()) {
      serviceParameterName = make_shared<string>(boost::any_cast<string>(m["ServiceParameterName"]));
    }
  }


  virtual ~DescribeApiResponseBodyConstantParametersConstantParameter() = default;
};
class DescribeApiResponseBodyConstantParameters : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApiResponseBodyConstantParametersConstantParameter>> constantParameter{};

  DescribeApiResponseBodyConstantParameters() {}

  explicit DescribeApiResponseBodyConstantParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (constantParameter) {
      vector<boost::any> temp1;
      for(auto item1:*constantParameter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConstantParameter"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConstantParameter") != m.end() && !m["ConstantParameter"].empty()) {
      if (typeid(vector<boost::any>) == m["ConstantParameter"].type()) {
        vector<DescribeApiResponseBodyConstantParametersConstantParameter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConstantParameter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApiResponseBodyConstantParametersConstantParameter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        constantParameter = make_shared<vector<DescribeApiResponseBodyConstantParametersConstantParameter>>(expect1);
      }
    }
  }


  virtual ~DescribeApiResponseBodyConstantParameters() = default;
};
class DescribeApiResponseBodyCustomSystemParametersCustomSystemParameter : public Darabonba::Model {
public:
  shared_ptr<string> demoValue{};
  shared_ptr<string> description{};
  shared_ptr<string> location{};
  shared_ptr<string> parameterName{};
  shared_ptr<string> serviceParameterName{};

  DescribeApiResponseBodyCustomSystemParametersCustomSystemParameter() {}

  explicit DescribeApiResponseBodyCustomSystemParametersCustomSystemParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (demoValue) {
      res["DemoValue"] = boost::any(*demoValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (parameterName) {
      res["ParameterName"] = boost::any(*parameterName);
    }
    if (serviceParameterName) {
      res["ServiceParameterName"] = boost::any(*serviceParameterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DemoValue") != m.end() && !m["DemoValue"].empty()) {
      demoValue = make_shared<string>(boost::any_cast<string>(m["DemoValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("ParameterName") != m.end() && !m["ParameterName"].empty()) {
      parameterName = make_shared<string>(boost::any_cast<string>(m["ParameterName"]));
    }
    if (m.find("ServiceParameterName") != m.end() && !m["ServiceParameterName"].empty()) {
      serviceParameterName = make_shared<string>(boost::any_cast<string>(m["ServiceParameterName"]));
    }
  }


  virtual ~DescribeApiResponseBodyCustomSystemParametersCustomSystemParameter() = default;
};
class DescribeApiResponseBodyCustomSystemParameters : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApiResponseBodyCustomSystemParametersCustomSystemParameter>> customSystemParameter{};

  DescribeApiResponseBodyCustomSystemParameters() {}

  explicit DescribeApiResponseBodyCustomSystemParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customSystemParameter) {
      vector<boost::any> temp1;
      for(auto item1:*customSystemParameter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CustomSystemParameter"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomSystemParameter") != m.end() && !m["CustomSystemParameter"].empty()) {
      if (typeid(vector<boost::any>) == m["CustomSystemParameter"].type()) {
        vector<DescribeApiResponseBodyCustomSystemParametersCustomSystemParameter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CustomSystemParameter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApiResponseBodyCustomSystemParametersCustomSystemParameter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customSystemParameter = make_shared<vector<DescribeApiResponseBodyCustomSystemParametersCustomSystemParameter>>(expect1);
      }
    }
  }


  virtual ~DescribeApiResponseBodyCustomSystemParameters() = default;
};
class DescribeApiResponseBodyDeployedInfosDeployedInfo : public Darabonba::Model {
public:
  shared_ptr<string> deployedStatus{};
  shared_ptr<string> effectiveVersion{};
  shared_ptr<string> stageName{};

  DescribeApiResponseBodyDeployedInfosDeployedInfo() {}

  explicit DescribeApiResponseBodyDeployedInfosDeployedInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deployedStatus) {
      res["DeployedStatus"] = boost::any(*deployedStatus);
    }
    if (effectiveVersion) {
      res["EffectiveVersion"] = boost::any(*effectiveVersion);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeployedStatus") != m.end() && !m["DeployedStatus"].empty()) {
      deployedStatus = make_shared<string>(boost::any_cast<string>(m["DeployedStatus"]));
    }
    if (m.find("EffectiveVersion") != m.end() && !m["EffectiveVersion"].empty()) {
      effectiveVersion = make_shared<string>(boost::any_cast<string>(m["EffectiveVersion"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~DescribeApiResponseBodyDeployedInfosDeployedInfo() = default;
};
class DescribeApiResponseBodyDeployedInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApiResponseBodyDeployedInfosDeployedInfo>> deployedInfo{};

  DescribeApiResponseBodyDeployedInfos() {}

  explicit DescribeApiResponseBodyDeployedInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deployedInfo) {
      vector<boost::any> temp1;
      for(auto item1:*deployedInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DeployedInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeployedInfo") != m.end() && !m["DeployedInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["DeployedInfo"].type()) {
        vector<DescribeApiResponseBodyDeployedInfosDeployedInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DeployedInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApiResponseBodyDeployedInfosDeployedInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deployedInfo = make_shared<vector<DescribeApiResponseBodyDeployedInfosDeployedInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeApiResponseBodyDeployedInfos() = default;
};
class DescribeApiResponseBodyErrorCodeSamplesErrorCodeSample : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> description{};
  shared_ptr<string> message{};
  shared_ptr<string> model{};

  DescribeApiResponseBodyErrorCodeSamplesErrorCodeSample() {}

  explicit DescribeApiResponseBodyErrorCodeSamplesErrorCodeSample(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
  }


  virtual ~DescribeApiResponseBodyErrorCodeSamplesErrorCodeSample() = default;
};
class DescribeApiResponseBodyErrorCodeSamples : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApiResponseBodyErrorCodeSamplesErrorCodeSample>> errorCodeSample{};

  DescribeApiResponseBodyErrorCodeSamples() {}

  explicit DescribeApiResponseBodyErrorCodeSamples(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCodeSample) {
      vector<boost::any> temp1;
      for(auto item1:*errorCodeSample){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ErrorCodeSample"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCodeSample") != m.end() && !m["ErrorCodeSample"].empty()) {
      if (typeid(vector<boost::any>) == m["ErrorCodeSample"].type()) {
        vector<DescribeApiResponseBodyErrorCodeSamplesErrorCodeSample> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ErrorCodeSample"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApiResponseBodyErrorCodeSamplesErrorCodeSample model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        errorCodeSample = make_shared<vector<DescribeApiResponseBodyErrorCodeSamplesErrorCodeSample>>(expect1);
      }
    }
  }


  virtual ~DescribeApiResponseBodyErrorCodeSamples() = default;
};
class DescribeApiResponseBodyOpenIdConnectConfig : public Darabonba::Model {
public:
  shared_ptr<string> idTokenParamName{};
  shared_ptr<string> openIdApiType{};
  shared_ptr<string> publicKey{};
  shared_ptr<string> publicKeyId{};

  DescribeApiResponseBodyOpenIdConnectConfig() {}

  explicit DescribeApiResponseBodyOpenIdConnectConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (idTokenParamName) {
      res["IdTokenParamName"] = boost::any(*idTokenParamName);
    }
    if (openIdApiType) {
      res["OpenIdApiType"] = boost::any(*openIdApiType);
    }
    if (publicKey) {
      res["PublicKey"] = boost::any(*publicKey);
    }
    if (publicKeyId) {
      res["PublicKeyId"] = boost::any(*publicKeyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IdTokenParamName") != m.end() && !m["IdTokenParamName"].empty()) {
      idTokenParamName = make_shared<string>(boost::any_cast<string>(m["IdTokenParamName"]));
    }
    if (m.find("OpenIdApiType") != m.end() && !m["OpenIdApiType"].empty()) {
      openIdApiType = make_shared<string>(boost::any_cast<string>(m["OpenIdApiType"]));
    }
    if (m.find("PublicKey") != m.end() && !m["PublicKey"].empty()) {
      publicKey = make_shared<string>(boost::any_cast<string>(m["PublicKey"]));
    }
    if (m.find("PublicKeyId") != m.end() && !m["PublicKeyId"].empty()) {
      publicKeyId = make_shared<string>(boost::any_cast<string>(m["PublicKeyId"]));
    }
  }


  virtual ~DescribeApiResponseBodyOpenIdConnectConfig() = default;
};
class DescribeApiResponseBodyParametersMapObjectServiceParameterMap : public Darabonba::Model {
public:
  shared_ptr<string> requestParameterName{};
  shared_ptr<string> serviceParameterName{};

  DescribeApiResponseBodyParametersMapObjectServiceParameterMap() {}

  explicit DescribeApiResponseBodyParametersMapObjectServiceParameterMap(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestParameterName) {
      res["RequestParameterName"] = boost::any(*requestParameterName);
    }
    if (serviceParameterName) {
      res["ServiceParameterName"] = boost::any(*serviceParameterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestParameterName") != m.end() && !m["RequestParameterName"].empty()) {
      requestParameterName = make_shared<string>(boost::any_cast<string>(m["RequestParameterName"]));
    }
    if (m.find("ServiceParameterName") != m.end() && !m["ServiceParameterName"].empty()) {
      serviceParameterName = make_shared<string>(boost::any_cast<string>(m["ServiceParameterName"]));
    }
  }


  virtual ~DescribeApiResponseBodyParametersMapObjectServiceParameterMap() = default;
};
class DescribeApiResponseBodyParametersMapObject : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApiResponseBodyParametersMapObjectServiceParameterMap>> serviceParameterMap{};

  DescribeApiResponseBodyParametersMapObject() {}

  explicit DescribeApiResponseBodyParametersMapObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceParameterMap) {
      vector<boost::any> temp1;
      for(auto item1:*serviceParameterMap){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceParameterMap"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceParameterMap") != m.end() && !m["ServiceParameterMap"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceParameterMap"].type()) {
        vector<DescribeApiResponseBodyParametersMapObjectServiceParameterMap> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceParameterMap"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApiResponseBodyParametersMapObjectServiceParameterMap model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceParameterMap = make_shared<vector<DescribeApiResponseBodyParametersMapObjectServiceParameterMap>>(expect1);
      }
    }
  }


  virtual ~DescribeApiResponseBodyParametersMapObject() = default;
};
class DescribeApiResponseBodyRequestConfig : public Darabonba::Model {
public:
  shared_ptr<string> bodyFormat{};
  shared_ptr<string> postBodyDescription{};
  shared_ptr<string> requestHttpMethod{};
  shared_ptr<string> requestPath{};
  shared_ptr<string> requestProtocol{};

  DescribeApiResponseBodyRequestConfig() {}

  explicit DescribeApiResponseBodyRequestConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyFormat) {
      res["BodyFormat"] = boost::any(*bodyFormat);
    }
    if (postBodyDescription) {
      res["PostBodyDescription"] = boost::any(*postBodyDescription);
    }
    if (requestHttpMethod) {
      res["RequestHttpMethod"] = boost::any(*requestHttpMethod);
    }
    if (requestPath) {
      res["RequestPath"] = boost::any(*requestPath);
    }
    if (requestProtocol) {
      res["RequestProtocol"] = boost::any(*requestProtocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyFormat") != m.end() && !m["BodyFormat"].empty()) {
      bodyFormat = make_shared<string>(boost::any_cast<string>(m["BodyFormat"]));
    }
    if (m.find("PostBodyDescription") != m.end() && !m["PostBodyDescription"].empty()) {
      postBodyDescription = make_shared<string>(boost::any_cast<string>(m["PostBodyDescription"]));
    }
    if (m.find("RequestHttpMethod") != m.end() && !m["RequestHttpMethod"].empty()) {
      requestHttpMethod = make_shared<string>(boost::any_cast<string>(m["RequestHttpMethod"]));
    }
    if (m.find("RequestPath") != m.end() && !m["RequestPath"].empty()) {
      requestPath = make_shared<string>(boost::any_cast<string>(m["RequestPath"]));
    }
    if (m.find("RequestProtocol") != m.end() && !m["RequestProtocol"].empty()) {
      requestProtocol = make_shared<string>(boost::any_cast<string>(m["RequestProtocol"]));
    }
  }


  virtual ~DescribeApiResponseBodyRequestConfig() = default;
};
class DescribeApiResponseBodyRequestParametersObjectRequestParam : public Darabonba::Model {
public:
  shared_ptr<string> apiParameterName{};
  shared_ptr<string> defaultValue{};
  shared_ptr<string> demoValue{};
  shared_ptr<string> description{};
  shared_ptr<string> docOrder{};
  shared_ptr<string> docShow{};
  shared_ptr<string> enumValue{};
  shared_ptr<string> jsonScheme{};
  shared_ptr<string> location{};
  shared_ptr<long> maxLength{};
  shared_ptr<long> maxValue{};
  shared_ptr<long> minLength{};
  shared_ptr<long> minValue{};
  shared_ptr<string> parameterType{};
  shared_ptr<string> regularExpression{};
  shared_ptr<string> required{};

  DescribeApiResponseBodyRequestParametersObjectRequestParam() {}

  explicit DescribeApiResponseBodyRequestParametersObjectRequestParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiParameterName) {
      res["ApiParameterName"] = boost::any(*apiParameterName);
    }
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (demoValue) {
      res["DemoValue"] = boost::any(*demoValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (docOrder) {
      res["DocOrder"] = boost::any(*docOrder);
    }
    if (docShow) {
      res["DocShow"] = boost::any(*docShow);
    }
    if (enumValue) {
      res["EnumValue"] = boost::any(*enumValue);
    }
    if (jsonScheme) {
      res["JsonScheme"] = boost::any(*jsonScheme);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (maxLength) {
      res["MaxLength"] = boost::any(*maxLength);
    }
    if (maxValue) {
      res["MaxValue"] = boost::any(*maxValue);
    }
    if (minLength) {
      res["MinLength"] = boost::any(*minLength);
    }
    if (minValue) {
      res["MinValue"] = boost::any(*minValue);
    }
    if (parameterType) {
      res["ParameterType"] = boost::any(*parameterType);
    }
    if (regularExpression) {
      res["RegularExpression"] = boost::any(*regularExpression);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiParameterName") != m.end() && !m["ApiParameterName"].empty()) {
      apiParameterName = make_shared<string>(boost::any_cast<string>(m["ApiParameterName"]));
    }
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("DemoValue") != m.end() && !m["DemoValue"].empty()) {
      demoValue = make_shared<string>(boost::any_cast<string>(m["DemoValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DocOrder") != m.end() && !m["DocOrder"].empty()) {
      docOrder = make_shared<string>(boost::any_cast<string>(m["DocOrder"]));
    }
    if (m.find("DocShow") != m.end() && !m["DocShow"].empty()) {
      docShow = make_shared<string>(boost::any_cast<string>(m["DocShow"]));
    }
    if (m.find("EnumValue") != m.end() && !m["EnumValue"].empty()) {
      enumValue = make_shared<string>(boost::any_cast<string>(m["EnumValue"]));
    }
    if (m.find("JsonScheme") != m.end() && !m["JsonScheme"].empty()) {
      jsonScheme = make_shared<string>(boost::any_cast<string>(m["JsonScheme"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("MaxLength") != m.end() && !m["MaxLength"].empty()) {
      maxLength = make_shared<long>(boost::any_cast<long>(m["MaxLength"]));
    }
    if (m.find("MaxValue") != m.end() && !m["MaxValue"].empty()) {
      maxValue = make_shared<long>(boost::any_cast<long>(m["MaxValue"]));
    }
    if (m.find("MinLength") != m.end() && !m["MinLength"].empty()) {
      minLength = make_shared<long>(boost::any_cast<long>(m["MinLength"]));
    }
    if (m.find("MinValue") != m.end() && !m["MinValue"].empty()) {
      minValue = make_shared<long>(boost::any_cast<long>(m["MinValue"]));
    }
    if (m.find("ParameterType") != m.end() && !m["ParameterType"].empty()) {
      parameterType = make_shared<string>(boost::any_cast<string>(m["ParameterType"]));
    }
    if (m.find("RegularExpression") != m.end() && !m["RegularExpression"].empty()) {
      regularExpression = make_shared<string>(boost::any_cast<string>(m["RegularExpression"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<string>(boost::any_cast<string>(m["Required"]));
    }
  }


  virtual ~DescribeApiResponseBodyRequestParametersObjectRequestParam() = default;
};
class DescribeApiResponseBodyRequestParametersObject : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApiResponseBodyRequestParametersObjectRequestParam>> requestParam{};

  DescribeApiResponseBodyRequestParametersObject() {}

  explicit DescribeApiResponseBodyRequestParametersObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestParam) {
      vector<boost::any> temp1;
      for(auto item1:*requestParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RequestParam"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestParam") != m.end() && !m["RequestParam"].empty()) {
      if (typeid(vector<boost::any>) == m["RequestParam"].type()) {
        vector<DescribeApiResponseBodyRequestParametersObjectRequestParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RequestParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApiResponseBodyRequestParametersObjectRequestParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        requestParam = make_shared<vector<DescribeApiResponseBodyRequestParametersObjectRequestParam>>(expect1);
      }
    }
  }


  virtual ~DescribeApiResponseBodyRequestParametersObject() = default;
};
class DescribeApiResponseBodyServiceConfigFunctionComputeConfig : public Darabonba::Model {
public:
  shared_ptr<string> fcRegionId{};
  shared_ptr<string> functionName{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> serviceName{};

  DescribeApiResponseBodyServiceConfigFunctionComputeConfig() {}

  explicit DescribeApiResponseBodyServiceConfigFunctionComputeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fcRegionId) {
      res["FcRegionId"] = boost::any(*fcRegionId);
    }
    if (functionName) {
      res["FunctionName"] = boost::any(*functionName);
    }
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FcRegionId") != m.end() && !m["FcRegionId"].empty()) {
      fcRegionId = make_shared<string>(boost::any_cast<string>(m["FcRegionId"]));
    }
    if (m.find("FunctionName") != m.end() && !m["FunctionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["FunctionName"]));
    }
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~DescribeApiResponseBodyServiceConfigFunctionComputeConfig() = default;
};
class DescribeApiResponseBodyServiceConfigVpcConfig : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};
  shared_ptr<long> port{};
  shared_ptr<string> vpcId{};

  DescribeApiResponseBodyServiceConfigVpcConfig() {}

  explicit DescribeApiResponseBodyServiceConfigVpcConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeApiResponseBodyServiceConfigVpcConfig() = default;
};
class DescribeApiResponseBodyServiceConfig : public Darabonba::Model {
public:
  shared_ptr<string> contentTypeCatagory{};
  shared_ptr<string> contentTypeValue{};
  shared_ptr<DescribeApiResponseBodyServiceConfigFunctionComputeConfig> functionComputeConfig{};
  shared_ptr<string> mock{};
  shared_ptr<string> mockResult{};
  shared_ptr<string> serviceAddress{};
  shared_ptr<string> serviceHttpMethod{};
  shared_ptr<string> servicePath{};
  shared_ptr<string> serviceProtocol{};
  shared_ptr<string> serviceTimeout{};
  shared_ptr<string> serviceVpcEnable{};
  shared_ptr<DescribeApiResponseBodyServiceConfigVpcConfig> vpcConfig{};

  DescribeApiResponseBodyServiceConfig() {}

  explicit DescribeApiResponseBodyServiceConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contentTypeCatagory) {
      res["ContentTypeCatagory"] = boost::any(*contentTypeCatagory);
    }
    if (contentTypeValue) {
      res["ContentTypeValue"] = boost::any(*contentTypeValue);
    }
    if (functionComputeConfig) {
      res["FunctionComputeConfig"] = functionComputeConfig ? boost::any(functionComputeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mock) {
      res["Mock"] = boost::any(*mock);
    }
    if (mockResult) {
      res["MockResult"] = boost::any(*mockResult);
    }
    if (serviceAddress) {
      res["ServiceAddress"] = boost::any(*serviceAddress);
    }
    if (serviceHttpMethod) {
      res["ServiceHttpMethod"] = boost::any(*serviceHttpMethod);
    }
    if (servicePath) {
      res["ServicePath"] = boost::any(*servicePath);
    }
    if (serviceProtocol) {
      res["ServiceProtocol"] = boost::any(*serviceProtocol);
    }
    if (serviceTimeout) {
      res["ServiceTimeout"] = boost::any(*serviceTimeout);
    }
    if (serviceVpcEnable) {
      res["ServiceVpcEnable"] = boost::any(*serviceVpcEnable);
    }
    if (vpcConfig) {
      res["VpcConfig"] = vpcConfig ? boost::any(vpcConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ContentTypeCatagory") != m.end() && !m["ContentTypeCatagory"].empty()) {
      contentTypeCatagory = make_shared<string>(boost::any_cast<string>(m["ContentTypeCatagory"]));
    }
    if (m.find("ContentTypeValue") != m.end() && !m["ContentTypeValue"].empty()) {
      contentTypeValue = make_shared<string>(boost::any_cast<string>(m["ContentTypeValue"]));
    }
    if (m.find("FunctionComputeConfig") != m.end() && !m["FunctionComputeConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["FunctionComputeConfig"].type()) {
        DescribeApiResponseBodyServiceConfigFunctionComputeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FunctionComputeConfig"]));
        functionComputeConfig = make_shared<DescribeApiResponseBodyServiceConfigFunctionComputeConfig>(model1);
      }
    }
    if (m.find("Mock") != m.end() && !m["Mock"].empty()) {
      mock = make_shared<string>(boost::any_cast<string>(m["Mock"]));
    }
    if (m.find("MockResult") != m.end() && !m["MockResult"].empty()) {
      mockResult = make_shared<string>(boost::any_cast<string>(m["MockResult"]));
    }
    if (m.find("ServiceAddress") != m.end() && !m["ServiceAddress"].empty()) {
      serviceAddress = make_shared<string>(boost::any_cast<string>(m["ServiceAddress"]));
    }
    if (m.find("ServiceHttpMethod") != m.end() && !m["ServiceHttpMethod"].empty()) {
      serviceHttpMethod = make_shared<string>(boost::any_cast<string>(m["ServiceHttpMethod"]));
    }
    if (m.find("ServicePath") != m.end() && !m["ServicePath"].empty()) {
      servicePath = make_shared<string>(boost::any_cast<string>(m["ServicePath"]));
    }
    if (m.find("ServiceProtocol") != m.end() && !m["ServiceProtocol"].empty()) {
      serviceProtocol = make_shared<string>(boost::any_cast<string>(m["ServiceProtocol"]));
    }
    if (m.find("ServiceTimeout") != m.end() && !m["ServiceTimeout"].empty()) {
      serviceTimeout = make_shared<string>(boost::any_cast<string>(m["ServiceTimeout"]));
    }
    if (m.find("ServiceVpcEnable") != m.end() && !m["ServiceVpcEnable"].empty()) {
      serviceVpcEnable = make_shared<string>(boost::any_cast<string>(m["ServiceVpcEnable"]));
    }
    if (m.find("VpcConfig") != m.end() && !m["VpcConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["VpcConfig"].type()) {
        DescribeApiResponseBodyServiceConfigVpcConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VpcConfig"]));
        vpcConfig = make_shared<DescribeApiResponseBodyServiceConfigVpcConfig>(model1);
      }
    }
  }


  virtual ~DescribeApiResponseBodyServiceConfig() = default;
};
class DescribeApiResponseBodyServiceParametersObjectServiceParam : public Darabonba::Model {
public:
  shared_ptr<string> location{};
  shared_ptr<string> serviceParameterName{};
  shared_ptr<string> type{};

  DescribeApiResponseBodyServiceParametersObjectServiceParam() {}

  explicit DescribeApiResponseBodyServiceParametersObjectServiceParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (serviceParameterName) {
      res["ServiceParameterName"] = boost::any(*serviceParameterName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("ServiceParameterName") != m.end() && !m["ServiceParameterName"].empty()) {
      serviceParameterName = make_shared<string>(boost::any_cast<string>(m["ServiceParameterName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeApiResponseBodyServiceParametersObjectServiceParam() = default;
};
class DescribeApiResponseBodyServiceParametersObject : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApiResponseBodyServiceParametersObjectServiceParam>> serviceParam{};

  DescribeApiResponseBodyServiceParametersObject() {}

  explicit DescribeApiResponseBodyServiceParametersObject(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serviceParam) {
      vector<boost::any> temp1;
      for(auto item1:*serviceParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServiceParam"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServiceParam") != m.end() && !m["ServiceParam"].empty()) {
      if (typeid(vector<boost::any>) == m["ServiceParam"].type()) {
        vector<DescribeApiResponseBodyServiceParametersObjectServiceParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServiceParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApiResponseBodyServiceParametersObjectServiceParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceParam = make_shared<vector<DescribeApiResponseBodyServiceParametersObjectServiceParam>>(expect1);
      }
    }
  }


  virtual ~DescribeApiResponseBodyServiceParametersObject() = default;
};
class DescribeApiResponseBodySystemParametersSystemParameter : public Darabonba::Model {
public:
  shared_ptr<string> demoValue{};
  shared_ptr<string> description{};
  shared_ptr<string> location{};
  shared_ptr<string> parameterName{};
  shared_ptr<string> serviceParameterName{};

  DescribeApiResponseBodySystemParametersSystemParameter() {}

  explicit DescribeApiResponseBodySystemParametersSystemParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (demoValue) {
      res["DemoValue"] = boost::any(*demoValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (parameterName) {
      res["ParameterName"] = boost::any(*parameterName);
    }
    if (serviceParameterName) {
      res["ServiceParameterName"] = boost::any(*serviceParameterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DemoValue") != m.end() && !m["DemoValue"].empty()) {
      demoValue = make_shared<string>(boost::any_cast<string>(m["DemoValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("ParameterName") != m.end() && !m["ParameterName"].empty()) {
      parameterName = make_shared<string>(boost::any_cast<string>(m["ParameterName"]));
    }
    if (m.find("ServiceParameterName") != m.end() && !m["ServiceParameterName"].empty()) {
      serviceParameterName = make_shared<string>(boost::any_cast<string>(m["ServiceParameterName"]));
    }
  }


  virtual ~DescribeApiResponseBodySystemParametersSystemParameter() = default;
};
class DescribeApiResponseBodySystemParameters : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApiResponseBodySystemParametersSystemParameter>> systemParameter{};

  DescribeApiResponseBodySystemParameters() {}

  explicit DescribeApiResponseBodySystemParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (systemParameter) {
      vector<boost::any> temp1;
      for(auto item1:*systemParameter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SystemParameter"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SystemParameter") != m.end() && !m["SystemParameter"].empty()) {
      if (typeid(vector<boost::any>) == m["SystemParameter"].type()) {
        vector<DescribeApiResponseBodySystemParametersSystemParameter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SystemParameter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApiResponseBodySystemParametersSystemParameter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        systemParameter = make_shared<vector<DescribeApiResponseBodySystemParametersSystemParameter>>(expect1);
      }
    }
  }


  virtual ~DescribeApiResponseBodySystemParameters() = default;
};
class DescribeApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> apiName{};
  shared_ptr<string> authType{};
  shared_ptr<DescribeApiResponseBodyConstantParameters> constantParameters{};
  shared_ptr<string> createdTime{};
  shared_ptr<DescribeApiResponseBodyCustomSystemParameters> customSystemParameters{};
  shared_ptr<DescribeApiResponseBodyDeployedInfos> deployedInfos{};
  shared_ptr<string> description{};
  shared_ptr<DescribeApiResponseBodyErrorCodeSamples> errorCodeSamples{};
  shared_ptr<string> failResultSample{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> mock{};
  shared_ptr<string> mockResult{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<DescribeApiResponseBodyOpenIdConnectConfig> openIdConnectConfig{};
  shared_ptr<string> originResultDescription{};
  shared_ptr<DescribeApiResponseBodyParametersMapObject> parametersMapObject{};
  shared_ptr<string> regionId{};
  shared_ptr<DescribeApiResponseBodyRequestConfig> requestConfig{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeApiResponseBodyRequestParametersObject> requestParametersObject{};
  shared_ptr<string> resultSample{};
  shared_ptr<string> resultType{};
  shared_ptr<DescribeApiResponseBodyServiceConfig> serviceConfig{};
  shared_ptr<DescribeApiResponseBodyServiceParametersObject> serviceParametersObject{};
  shared_ptr<DescribeApiResponseBodySystemParameters> systemParameters{};
  shared_ptr<string> visibility{};

  DescribeApiResponseBody() {}

  explicit DescribeApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (authType) {
      res["AuthType"] = boost::any(*authType);
    }
    if (constantParameters) {
      res["ConstantParameters"] = constantParameters ? boost::any(constantParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (customSystemParameters) {
      res["CustomSystemParameters"] = customSystemParameters ? boost::any(customSystemParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deployedInfos) {
      res["DeployedInfos"] = deployedInfos ? boost::any(deployedInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (errorCodeSamples) {
      res["ErrorCodeSamples"] = errorCodeSamples ? boost::any(errorCodeSamples->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (failResultSample) {
      res["FailResultSample"] = boost::any(*failResultSample);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (mock) {
      res["Mock"] = boost::any(*mock);
    }
    if (mockResult) {
      res["MockResult"] = boost::any(*mockResult);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (openIdConnectConfig) {
      res["OpenIdConnectConfig"] = openIdConnectConfig ? boost::any(openIdConnectConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (originResultDescription) {
      res["OriginResultDescription"] = boost::any(*originResultDescription);
    }
    if (parametersMapObject) {
      res["ParametersMapObject"] = parametersMapObject ? boost::any(parametersMapObject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestConfig) {
      res["RequestConfig"] = requestConfig ? boost::any(requestConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (requestParametersObject) {
      res["RequestParametersObject"] = requestParametersObject ? boost::any(requestParametersObject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resultSample) {
      res["ResultSample"] = boost::any(*resultSample);
    }
    if (resultType) {
      res["ResultType"] = boost::any(*resultType);
    }
    if (serviceConfig) {
      res["ServiceConfig"] = serviceConfig ? boost::any(serviceConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serviceParametersObject) {
      res["ServiceParametersObject"] = serviceParametersObject ? boost::any(serviceParametersObject->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (systemParameters) {
      res["SystemParameters"] = systemParameters ? boost::any(systemParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("AuthType") != m.end() && !m["AuthType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["AuthType"]));
    }
    if (m.find("ConstantParameters") != m.end() && !m["ConstantParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConstantParameters"].type()) {
        DescribeApiResponseBodyConstantParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConstantParameters"]));
        constantParameters = make_shared<DescribeApiResponseBodyConstantParameters>(model1);
      }
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("CustomSystemParameters") != m.end() && !m["CustomSystemParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["CustomSystemParameters"].type()) {
        DescribeApiResponseBodyCustomSystemParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CustomSystemParameters"]));
        customSystemParameters = make_shared<DescribeApiResponseBodyCustomSystemParameters>(model1);
      }
    }
    if (m.find("DeployedInfos") != m.end() && !m["DeployedInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeployedInfos"].type()) {
        DescribeApiResponseBodyDeployedInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeployedInfos"]));
        deployedInfos = make_shared<DescribeApiResponseBodyDeployedInfos>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ErrorCodeSamples") != m.end() && !m["ErrorCodeSamples"].empty()) {
      if (typeid(map<string, boost::any>) == m["ErrorCodeSamples"].type()) {
        DescribeApiResponseBodyErrorCodeSamples model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ErrorCodeSamples"]));
        errorCodeSamples = make_shared<DescribeApiResponseBodyErrorCodeSamples>(model1);
      }
    }
    if (m.find("FailResultSample") != m.end() && !m["FailResultSample"].empty()) {
      failResultSample = make_shared<string>(boost::any_cast<string>(m["FailResultSample"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Mock") != m.end() && !m["Mock"].empty()) {
      mock = make_shared<string>(boost::any_cast<string>(m["Mock"]));
    }
    if (m.find("MockResult") != m.end() && !m["MockResult"].empty()) {
      mockResult = make_shared<string>(boost::any_cast<string>(m["MockResult"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("OpenIdConnectConfig") != m.end() && !m["OpenIdConnectConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["OpenIdConnectConfig"].type()) {
        DescribeApiResponseBodyOpenIdConnectConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["OpenIdConnectConfig"]));
        openIdConnectConfig = make_shared<DescribeApiResponseBodyOpenIdConnectConfig>(model1);
      }
    }
    if (m.find("OriginResultDescription") != m.end() && !m["OriginResultDescription"].empty()) {
      originResultDescription = make_shared<string>(boost::any_cast<string>(m["OriginResultDescription"]));
    }
    if (m.find("ParametersMapObject") != m.end() && !m["ParametersMapObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ParametersMapObject"].type()) {
        DescribeApiResponseBodyParametersMapObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ParametersMapObject"]));
        parametersMapObject = make_shared<DescribeApiResponseBodyParametersMapObject>(model1);
      }
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestConfig") != m.end() && !m["RequestConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestConfig"].type()) {
        DescribeApiResponseBodyRequestConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestConfig"]));
        requestConfig = make_shared<DescribeApiResponseBodyRequestConfig>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RequestParametersObject") != m.end() && !m["RequestParametersObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestParametersObject"].type()) {
        DescribeApiResponseBodyRequestParametersObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestParametersObject"]));
        requestParametersObject = make_shared<DescribeApiResponseBodyRequestParametersObject>(model1);
      }
    }
    if (m.find("ResultSample") != m.end() && !m["ResultSample"].empty()) {
      resultSample = make_shared<string>(boost::any_cast<string>(m["ResultSample"]));
    }
    if (m.find("ResultType") != m.end() && !m["ResultType"].empty()) {
      resultType = make_shared<string>(boost::any_cast<string>(m["ResultType"]));
    }
    if (m.find("ServiceConfig") != m.end() && !m["ServiceConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServiceConfig"].type()) {
        DescribeApiResponseBodyServiceConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServiceConfig"]));
        serviceConfig = make_shared<DescribeApiResponseBodyServiceConfig>(model1);
      }
    }
    if (m.find("ServiceParametersObject") != m.end() && !m["ServiceParametersObject"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServiceParametersObject"].type()) {
        DescribeApiResponseBodyServiceParametersObject model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServiceParametersObject"]));
        serviceParametersObject = make_shared<DescribeApiResponseBodyServiceParametersObject>(model1);
      }
    }
    if (m.find("SystemParameters") != m.end() && !m["SystemParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SystemParameters"].type()) {
        DescribeApiResponseBodySystemParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SystemParameters"]));
        systemParameters = make_shared<DescribeApiResponseBodySystemParameters>(model1);
      }
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~DescribeApiResponseBody() = default;
};
class DescribeApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeApiResponseBody> body{};

  DescribeApiResponse() {}

  explicit DescribeApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApiResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApiResponse() = default;
};
class DescribeApiDocRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> groupId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> stageName{};

  DescribeApiDocRequest() {}

  explicit DescribeApiDocRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~DescribeApiDocRequest() = default;
};
class DescribeApiDocResponseBodyErrorCodeSamplesErrorCodeSample : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> description{};
  shared_ptr<string> message{};

  DescribeApiDocResponseBodyErrorCodeSamplesErrorCodeSample() {}

  explicit DescribeApiDocResponseBodyErrorCodeSamplesErrorCodeSample(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~DescribeApiDocResponseBodyErrorCodeSamplesErrorCodeSample() = default;
};
class DescribeApiDocResponseBodyErrorCodeSamples : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApiDocResponseBodyErrorCodeSamplesErrorCodeSample>> errorCodeSample{};

  DescribeApiDocResponseBodyErrorCodeSamples() {}

  explicit DescribeApiDocResponseBodyErrorCodeSamples(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCodeSample) {
      vector<boost::any> temp1;
      for(auto item1:*errorCodeSample){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ErrorCodeSample"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCodeSample") != m.end() && !m["ErrorCodeSample"].empty()) {
      if (typeid(vector<boost::any>) == m["ErrorCodeSample"].type()) {
        vector<DescribeApiDocResponseBodyErrorCodeSamplesErrorCodeSample> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ErrorCodeSample"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApiDocResponseBodyErrorCodeSamplesErrorCodeSample model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        errorCodeSample = make_shared<vector<DescribeApiDocResponseBodyErrorCodeSamplesErrorCodeSample>>(expect1);
      }
    }
  }


  virtual ~DescribeApiDocResponseBodyErrorCodeSamples() = default;
};
class DescribeApiDocResponseBodyPathParametersPathParameter : public Darabonba::Model {
public:
  shared_ptr<string> apiParameterName{};
  shared_ptr<string> demoValue{};
  shared_ptr<string> description{};

  DescribeApiDocResponseBodyPathParametersPathParameter() {}

  explicit DescribeApiDocResponseBodyPathParametersPathParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiParameterName) {
      res["ApiParameterName"] = boost::any(*apiParameterName);
    }
    if (demoValue) {
      res["DemoValue"] = boost::any(*demoValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiParameterName") != m.end() && !m["ApiParameterName"].empty()) {
      apiParameterName = make_shared<string>(boost::any_cast<string>(m["ApiParameterName"]));
    }
    if (m.find("DemoValue") != m.end() && !m["DemoValue"].empty()) {
      demoValue = make_shared<string>(boost::any_cast<string>(m["DemoValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~DescribeApiDocResponseBodyPathParametersPathParameter() = default;
};
class DescribeApiDocResponseBodyPathParameters : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApiDocResponseBodyPathParametersPathParameter>> pathParameter{};

  DescribeApiDocResponseBodyPathParameters() {}

  explicit DescribeApiDocResponseBodyPathParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pathParameter) {
      vector<boost::any> temp1;
      for(auto item1:*pathParameter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PathParameter"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PathParameter") != m.end() && !m["PathParameter"].empty()) {
      if (typeid(vector<boost::any>) == m["PathParameter"].type()) {
        vector<DescribeApiDocResponseBodyPathParametersPathParameter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PathParameter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApiDocResponseBodyPathParametersPathParameter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pathParameter = make_shared<vector<DescribeApiDocResponseBodyPathParametersPathParameter>>(expect1);
      }
    }
  }


  virtual ~DescribeApiDocResponseBodyPathParameters() = default;
};
class DescribeApiDocResponseBodyRequestBodyRequestParam : public Darabonba::Model {
public:
  shared_ptr<string> apiParameterName{};
  shared_ptr<string> defaultValue{};
  shared_ptr<string> demoValue{};
  shared_ptr<string> description{};
  shared_ptr<string> enumValue{};
  shared_ptr<string> jsonScheme{};
  shared_ptr<long> maxLength{};
  shared_ptr<long> maxValue{};
  shared_ptr<long> minLength{};
  shared_ptr<long> minValue{};
  shared_ptr<string> parameterType{};
  shared_ptr<string> regularExpression{};
  shared_ptr<string> required{};

  DescribeApiDocResponseBodyRequestBodyRequestParam() {}

  explicit DescribeApiDocResponseBodyRequestBodyRequestParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiParameterName) {
      res["ApiParameterName"] = boost::any(*apiParameterName);
    }
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (demoValue) {
      res["DemoValue"] = boost::any(*demoValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (enumValue) {
      res["EnumValue"] = boost::any(*enumValue);
    }
    if (jsonScheme) {
      res["JsonScheme"] = boost::any(*jsonScheme);
    }
    if (maxLength) {
      res["MaxLength"] = boost::any(*maxLength);
    }
    if (maxValue) {
      res["MaxValue"] = boost::any(*maxValue);
    }
    if (minLength) {
      res["MinLength"] = boost::any(*minLength);
    }
    if (minValue) {
      res["MinValue"] = boost::any(*minValue);
    }
    if (parameterType) {
      res["ParameterType"] = boost::any(*parameterType);
    }
    if (regularExpression) {
      res["RegularExpression"] = boost::any(*regularExpression);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiParameterName") != m.end() && !m["ApiParameterName"].empty()) {
      apiParameterName = make_shared<string>(boost::any_cast<string>(m["ApiParameterName"]));
    }
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("DemoValue") != m.end() && !m["DemoValue"].empty()) {
      demoValue = make_shared<string>(boost::any_cast<string>(m["DemoValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EnumValue") != m.end() && !m["EnumValue"].empty()) {
      enumValue = make_shared<string>(boost::any_cast<string>(m["EnumValue"]));
    }
    if (m.find("JsonScheme") != m.end() && !m["JsonScheme"].empty()) {
      jsonScheme = make_shared<string>(boost::any_cast<string>(m["JsonScheme"]));
    }
    if (m.find("MaxLength") != m.end() && !m["MaxLength"].empty()) {
      maxLength = make_shared<long>(boost::any_cast<long>(m["MaxLength"]));
    }
    if (m.find("MaxValue") != m.end() && !m["MaxValue"].empty()) {
      maxValue = make_shared<long>(boost::any_cast<long>(m["MaxValue"]));
    }
    if (m.find("MinLength") != m.end() && !m["MinLength"].empty()) {
      minLength = make_shared<long>(boost::any_cast<long>(m["MinLength"]));
    }
    if (m.find("MinValue") != m.end() && !m["MinValue"].empty()) {
      minValue = make_shared<long>(boost::any_cast<long>(m["MinValue"]));
    }
    if (m.find("ParameterType") != m.end() && !m["ParameterType"].empty()) {
      parameterType = make_shared<string>(boost::any_cast<string>(m["ParameterType"]));
    }
    if (m.find("RegularExpression") != m.end() && !m["RegularExpression"].empty()) {
      regularExpression = make_shared<string>(boost::any_cast<string>(m["RegularExpression"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<string>(boost::any_cast<string>(m["Required"]));
    }
  }


  virtual ~DescribeApiDocResponseBodyRequestBodyRequestParam() = default;
};
class DescribeApiDocResponseBodyRequestBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApiDocResponseBodyRequestBodyRequestParam>> requestParam{};

  DescribeApiDocResponseBodyRequestBody() {}

  explicit DescribeApiDocResponseBodyRequestBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestParam) {
      vector<boost::any> temp1;
      for(auto item1:*requestParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RequestParam"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestParam") != m.end() && !m["RequestParam"].empty()) {
      if (typeid(vector<boost::any>) == m["RequestParam"].type()) {
        vector<DescribeApiDocResponseBodyRequestBodyRequestParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RequestParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApiDocResponseBodyRequestBodyRequestParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        requestParam = make_shared<vector<DescribeApiDocResponseBodyRequestBodyRequestParam>>(expect1);
      }
    }
  }


  virtual ~DescribeApiDocResponseBodyRequestBody() = default;
};
class DescribeApiDocResponseBodyRequestHeadersRequestParam : public Darabonba::Model {
public:
  shared_ptr<string> apiParameterName{};
  shared_ptr<string> defaultValue{};
  shared_ptr<string> demoValue{};
  shared_ptr<string> description{};
  shared_ptr<string> enumValue{};
  shared_ptr<string> jsonScheme{};
  shared_ptr<long> maxLength{};
  shared_ptr<long> maxValue{};
  shared_ptr<long> minLength{};
  shared_ptr<long> minValue{};
  shared_ptr<string> parameterType{};
  shared_ptr<string> regularExpression{};
  shared_ptr<string> required{};

  DescribeApiDocResponseBodyRequestHeadersRequestParam() {}

  explicit DescribeApiDocResponseBodyRequestHeadersRequestParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiParameterName) {
      res["ApiParameterName"] = boost::any(*apiParameterName);
    }
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (demoValue) {
      res["DemoValue"] = boost::any(*demoValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (enumValue) {
      res["EnumValue"] = boost::any(*enumValue);
    }
    if (jsonScheme) {
      res["JsonScheme"] = boost::any(*jsonScheme);
    }
    if (maxLength) {
      res["MaxLength"] = boost::any(*maxLength);
    }
    if (maxValue) {
      res["MaxValue"] = boost::any(*maxValue);
    }
    if (minLength) {
      res["MinLength"] = boost::any(*minLength);
    }
    if (minValue) {
      res["MinValue"] = boost::any(*minValue);
    }
    if (parameterType) {
      res["ParameterType"] = boost::any(*parameterType);
    }
    if (regularExpression) {
      res["RegularExpression"] = boost::any(*regularExpression);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiParameterName") != m.end() && !m["ApiParameterName"].empty()) {
      apiParameterName = make_shared<string>(boost::any_cast<string>(m["ApiParameterName"]));
    }
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("DemoValue") != m.end() && !m["DemoValue"].empty()) {
      demoValue = make_shared<string>(boost::any_cast<string>(m["DemoValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EnumValue") != m.end() && !m["EnumValue"].empty()) {
      enumValue = make_shared<string>(boost::any_cast<string>(m["EnumValue"]));
    }
    if (m.find("JsonScheme") != m.end() && !m["JsonScheme"].empty()) {
      jsonScheme = make_shared<string>(boost::any_cast<string>(m["JsonScheme"]));
    }
    if (m.find("MaxLength") != m.end() && !m["MaxLength"].empty()) {
      maxLength = make_shared<long>(boost::any_cast<long>(m["MaxLength"]));
    }
    if (m.find("MaxValue") != m.end() && !m["MaxValue"].empty()) {
      maxValue = make_shared<long>(boost::any_cast<long>(m["MaxValue"]));
    }
    if (m.find("MinLength") != m.end() && !m["MinLength"].empty()) {
      minLength = make_shared<long>(boost::any_cast<long>(m["MinLength"]));
    }
    if (m.find("MinValue") != m.end() && !m["MinValue"].empty()) {
      minValue = make_shared<long>(boost::any_cast<long>(m["MinValue"]));
    }
    if (m.find("ParameterType") != m.end() && !m["ParameterType"].empty()) {
      parameterType = make_shared<string>(boost::any_cast<string>(m["ParameterType"]));
    }
    if (m.find("RegularExpression") != m.end() && !m["RegularExpression"].empty()) {
      regularExpression = make_shared<string>(boost::any_cast<string>(m["RegularExpression"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<string>(boost::any_cast<string>(m["Required"]));
    }
  }


  virtual ~DescribeApiDocResponseBodyRequestHeadersRequestParam() = default;
};
class DescribeApiDocResponseBodyRequestHeaders : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApiDocResponseBodyRequestHeadersRequestParam>> requestParam{};

  DescribeApiDocResponseBodyRequestHeaders() {}

  explicit DescribeApiDocResponseBodyRequestHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestParam) {
      vector<boost::any> temp1;
      for(auto item1:*requestParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RequestParam"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestParam") != m.end() && !m["RequestParam"].empty()) {
      if (typeid(vector<boost::any>) == m["RequestParam"].type()) {
        vector<DescribeApiDocResponseBodyRequestHeadersRequestParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RequestParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApiDocResponseBodyRequestHeadersRequestParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        requestParam = make_shared<vector<DescribeApiDocResponseBodyRequestHeadersRequestParam>>(expect1);
      }
    }
  }


  virtual ~DescribeApiDocResponseBodyRequestHeaders() = default;
};
class DescribeApiDocResponseBodyRequestQueriesRequestParam : public Darabonba::Model {
public:
  shared_ptr<string> apiParameterName{};
  shared_ptr<string> defaultValue{};
  shared_ptr<string> demoValue{};
  shared_ptr<string> description{};
  shared_ptr<string> enumValue{};
  shared_ptr<string> jsonScheme{};
  shared_ptr<long> maxLength{};
  shared_ptr<long> maxValue{};
  shared_ptr<long> minLength{};
  shared_ptr<long> minValue{};
  shared_ptr<string> parameterType{};
  shared_ptr<string> regularExpression{};
  shared_ptr<string> required{};

  DescribeApiDocResponseBodyRequestQueriesRequestParam() {}

  explicit DescribeApiDocResponseBodyRequestQueriesRequestParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiParameterName) {
      res["ApiParameterName"] = boost::any(*apiParameterName);
    }
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (demoValue) {
      res["DemoValue"] = boost::any(*demoValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (enumValue) {
      res["EnumValue"] = boost::any(*enumValue);
    }
    if (jsonScheme) {
      res["JsonScheme"] = boost::any(*jsonScheme);
    }
    if (maxLength) {
      res["MaxLength"] = boost::any(*maxLength);
    }
    if (maxValue) {
      res["MaxValue"] = boost::any(*maxValue);
    }
    if (minLength) {
      res["MinLength"] = boost::any(*minLength);
    }
    if (minValue) {
      res["MinValue"] = boost::any(*minValue);
    }
    if (parameterType) {
      res["ParameterType"] = boost::any(*parameterType);
    }
    if (regularExpression) {
      res["RegularExpression"] = boost::any(*regularExpression);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiParameterName") != m.end() && !m["ApiParameterName"].empty()) {
      apiParameterName = make_shared<string>(boost::any_cast<string>(m["ApiParameterName"]));
    }
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("DemoValue") != m.end() && !m["DemoValue"].empty()) {
      demoValue = make_shared<string>(boost::any_cast<string>(m["DemoValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EnumValue") != m.end() && !m["EnumValue"].empty()) {
      enumValue = make_shared<string>(boost::any_cast<string>(m["EnumValue"]));
    }
    if (m.find("JsonScheme") != m.end() && !m["JsonScheme"].empty()) {
      jsonScheme = make_shared<string>(boost::any_cast<string>(m["JsonScheme"]));
    }
    if (m.find("MaxLength") != m.end() && !m["MaxLength"].empty()) {
      maxLength = make_shared<long>(boost::any_cast<long>(m["MaxLength"]));
    }
    if (m.find("MaxValue") != m.end() && !m["MaxValue"].empty()) {
      maxValue = make_shared<long>(boost::any_cast<long>(m["MaxValue"]));
    }
    if (m.find("MinLength") != m.end() && !m["MinLength"].empty()) {
      minLength = make_shared<long>(boost::any_cast<long>(m["MinLength"]));
    }
    if (m.find("MinValue") != m.end() && !m["MinValue"].empty()) {
      minValue = make_shared<long>(boost::any_cast<long>(m["MinValue"]));
    }
    if (m.find("ParameterType") != m.end() && !m["ParameterType"].empty()) {
      parameterType = make_shared<string>(boost::any_cast<string>(m["ParameterType"]));
    }
    if (m.find("RegularExpression") != m.end() && !m["RegularExpression"].empty()) {
      regularExpression = make_shared<string>(boost::any_cast<string>(m["RegularExpression"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<string>(boost::any_cast<string>(m["Required"]));
    }
  }


  virtual ~DescribeApiDocResponseBodyRequestQueriesRequestParam() = default;
};
class DescribeApiDocResponseBodyRequestQueries : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApiDocResponseBodyRequestQueriesRequestParam>> requestParam{};

  DescribeApiDocResponseBodyRequestQueries() {}

  explicit DescribeApiDocResponseBodyRequestQueries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestParam) {
      vector<boost::any> temp1;
      for(auto item1:*requestParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RequestParam"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestParam") != m.end() && !m["RequestParam"].empty()) {
      if (typeid(vector<boost::any>) == m["RequestParam"].type()) {
        vector<DescribeApiDocResponseBodyRequestQueriesRequestParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RequestParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApiDocResponseBodyRequestQueriesRequestParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        requestParam = make_shared<vector<DescribeApiDocResponseBodyRequestQueriesRequestParam>>(expect1);
      }
    }
  }


  virtual ~DescribeApiDocResponseBodyRequestQueries() = default;
};
class DescribeApiDocResponseBodyResultDescriptionsResultDescription : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<bool> hasChild{};
  shared_ptr<string> id{};
  shared_ptr<string> key{};
  shared_ptr<bool> mandatory{};
  shared_ptr<string> name{};
  shared_ptr<string> pid{};
  shared_ptr<string> type{};

  DescribeApiDocResponseBodyResultDescriptionsResultDescription() {}

  explicit DescribeApiDocResponseBodyResultDescriptionsResultDescription(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (hasChild) {
      res["HasChild"] = boost::any(*hasChild);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (mandatory) {
      res["Mandatory"] = boost::any(*mandatory);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pid) {
      res["Pid"] = boost::any(*pid);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("HasChild") != m.end() && !m["HasChild"].empty()) {
      hasChild = make_shared<bool>(boost::any_cast<bool>(m["HasChild"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Mandatory") != m.end() && !m["Mandatory"].empty()) {
      mandatory = make_shared<bool>(boost::any_cast<bool>(m["Mandatory"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Pid") != m.end() && !m["Pid"].empty()) {
      pid = make_shared<string>(boost::any_cast<string>(m["Pid"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeApiDocResponseBodyResultDescriptionsResultDescription() = default;
};
class DescribeApiDocResponseBodyResultDescriptions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApiDocResponseBodyResultDescriptionsResultDescription>> resultDescription{};

  DescribeApiDocResponseBodyResultDescriptions() {}

  explicit DescribeApiDocResponseBodyResultDescriptions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultDescription) {
      vector<boost::any> temp1;
      for(auto item1:*resultDescription){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResultDescription"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResultDescription") != m.end() && !m["ResultDescription"].empty()) {
      if (typeid(vector<boost::any>) == m["ResultDescription"].type()) {
        vector<DescribeApiDocResponseBodyResultDescriptionsResultDescription> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResultDescription"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApiDocResponseBodyResultDescriptionsResultDescription model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resultDescription = make_shared<vector<DescribeApiDocResponseBodyResultDescriptionsResultDescription>>(expect1);
      }
    }
  }


  virtual ~DescribeApiDocResponseBodyResultDescriptions() = default;
};
class DescribeApiDocResponseBodySdkDemosSdkDemo : public Darabonba::Model {
public:
  shared_ptr<string> callDemo{};
  shared_ptr<string> ideKey{};

  DescribeApiDocResponseBodySdkDemosSdkDemo() {}

  explicit DescribeApiDocResponseBodySdkDemosSdkDemo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callDemo) {
      res["CallDemo"] = boost::any(*callDemo);
    }
    if (ideKey) {
      res["IdeKey"] = boost::any(*ideKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallDemo") != m.end() && !m["CallDemo"].empty()) {
      callDemo = make_shared<string>(boost::any_cast<string>(m["CallDemo"]));
    }
    if (m.find("IdeKey") != m.end() && !m["IdeKey"].empty()) {
      ideKey = make_shared<string>(boost::any_cast<string>(m["IdeKey"]));
    }
  }


  virtual ~DescribeApiDocResponseBodySdkDemosSdkDemo() = default;
};
class DescribeApiDocResponseBodySdkDemos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApiDocResponseBodySdkDemosSdkDemo>> sdkDemo{};

  DescribeApiDocResponseBodySdkDemos() {}

  explicit DescribeApiDocResponseBodySdkDemos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sdkDemo) {
      vector<boost::any> temp1;
      for(auto item1:*sdkDemo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SdkDemo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SdkDemo") != m.end() && !m["SdkDemo"].empty()) {
      if (typeid(vector<boost::any>) == m["SdkDemo"].type()) {
        vector<DescribeApiDocResponseBodySdkDemosSdkDemo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SdkDemo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApiDocResponseBodySdkDemosSdkDemo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sdkDemo = make_shared<vector<DescribeApiDocResponseBodySdkDemosSdkDemo>>(expect1);
      }
    }
  }


  virtual ~DescribeApiDocResponseBodySdkDemos() = default;
};
class DescribeApiDocResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> apiName{};
  shared_ptr<string> bodyFormat{};
  shared_ptr<string> deployedTime{};
  shared_ptr<string> description{};
  shared_ptr<DescribeApiDocResponseBodyErrorCodeSamples> errorCodeSamples{};
  shared_ptr<string> failResultSample{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> httpMethod{};
  shared_ptr<string> httpProtocol{};
  shared_ptr<string> path{};
  shared_ptr<DescribeApiDocResponseBodyPathParameters> pathParameters{};
  shared_ptr<string> postBodyDescription{};
  shared_ptr<string> postBodyType{};
  shared_ptr<string> regionId{};
  shared_ptr<DescribeApiDocResponseBodyRequestBody> requestBody{};
  shared_ptr<DescribeApiDocResponseBodyRequestHeaders> requestHeaders{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeApiDocResponseBodyRequestQueries> requestQueries{};
  shared_ptr<DescribeApiDocResponseBodyResultDescriptions> resultDescriptions{};
  shared_ptr<string> resultSample{};
  shared_ptr<string> resultType{};
  shared_ptr<DescribeApiDocResponseBodySdkDemos> sdkDemos{};
  shared_ptr<long> serviceTimeout{};
  shared_ptr<string> stageName{};

  DescribeApiDocResponseBody() {}

  explicit DescribeApiDocResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (bodyFormat) {
      res["BodyFormat"] = boost::any(*bodyFormat);
    }
    if (deployedTime) {
      res["DeployedTime"] = boost::any(*deployedTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (errorCodeSamples) {
      res["ErrorCodeSamples"] = errorCodeSamples ? boost::any(errorCodeSamples->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (failResultSample) {
      res["FailResultSample"] = boost::any(*failResultSample);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (httpMethod) {
      res["HttpMethod"] = boost::any(*httpMethod);
    }
    if (httpProtocol) {
      res["HttpProtocol"] = boost::any(*httpProtocol);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (pathParameters) {
      res["PathParameters"] = pathParameters ? boost::any(pathParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (postBodyDescription) {
      res["PostBodyDescription"] = boost::any(*postBodyDescription);
    }
    if (postBodyType) {
      res["PostBodyType"] = boost::any(*postBodyType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestBody) {
      res["RequestBody"] = requestBody ? boost::any(requestBody->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestHeaders) {
      res["RequestHeaders"] = requestHeaders ? boost::any(requestHeaders->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (requestQueries) {
      res["RequestQueries"] = requestQueries ? boost::any(requestQueries->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resultDescriptions) {
      res["ResultDescriptions"] = resultDescriptions ? boost::any(resultDescriptions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resultSample) {
      res["ResultSample"] = boost::any(*resultSample);
    }
    if (resultType) {
      res["ResultType"] = boost::any(*resultType);
    }
    if (sdkDemos) {
      res["SdkDemos"] = sdkDemos ? boost::any(sdkDemos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (serviceTimeout) {
      res["ServiceTimeout"] = boost::any(*serviceTimeout);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("BodyFormat") != m.end() && !m["BodyFormat"].empty()) {
      bodyFormat = make_shared<string>(boost::any_cast<string>(m["BodyFormat"]));
    }
    if (m.find("DeployedTime") != m.end() && !m["DeployedTime"].empty()) {
      deployedTime = make_shared<string>(boost::any_cast<string>(m["DeployedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ErrorCodeSamples") != m.end() && !m["ErrorCodeSamples"].empty()) {
      if (typeid(map<string, boost::any>) == m["ErrorCodeSamples"].type()) {
        DescribeApiDocResponseBodyErrorCodeSamples model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ErrorCodeSamples"]));
        errorCodeSamples = make_shared<DescribeApiDocResponseBodyErrorCodeSamples>(model1);
      }
    }
    if (m.find("FailResultSample") != m.end() && !m["FailResultSample"].empty()) {
      failResultSample = make_shared<string>(boost::any_cast<string>(m["FailResultSample"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("HttpMethod") != m.end() && !m["HttpMethod"].empty()) {
      httpMethod = make_shared<string>(boost::any_cast<string>(m["HttpMethod"]));
    }
    if (m.find("HttpProtocol") != m.end() && !m["HttpProtocol"].empty()) {
      httpProtocol = make_shared<string>(boost::any_cast<string>(m["HttpProtocol"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("PathParameters") != m.end() && !m["PathParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["PathParameters"].type()) {
        DescribeApiDocResponseBodyPathParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PathParameters"]));
        pathParameters = make_shared<DescribeApiDocResponseBodyPathParameters>(model1);
      }
    }
    if (m.find("PostBodyDescription") != m.end() && !m["PostBodyDescription"].empty()) {
      postBodyDescription = make_shared<string>(boost::any_cast<string>(m["PostBodyDescription"]));
    }
    if (m.find("PostBodyType") != m.end() && !m["PostBodyType"].empty()) {
      postBodyType = make_shared<string>(boost::any_cast<string>(m["PostBodyType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestBody") != m.end() && !m["RequestBody"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestBody"].type()) {
        DescribeApiDocResponseBodyRequestBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestBody"]));
        requestBody = make_shared<DescribeApiDocResponseBodyRequestBody>(model1);
      }
    }
    if (m.find("RequestHeaders") != m.end() && !m["RequestHeaders"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestHeaders"].type()) {
        DescribeApiDocResponseBodyRequestHeaders model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestHeaders"]));
        requestHeaders = make_shared<DescribeApiDocResponseBodyRequestHeaders>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RequestQueries") != m.end() && !m["RequestQueries"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestQueries"].type()) {
        DescribeApiDocResponseBodyRequestQueries model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestQueries"]));
        requestQueries = make_shared<DescribeApiDocResponseBodyRequestQueries>(model1);
      }
    }
    if (m.find("ResultDescriptions") != m.end() && !m["ResultDescriptions"].empty()) {
      if (typeid(map<string, boost::any>) == m["ResultDescriptions"].type()) {
        DescribeApiDocResponseBodyResultDescriptions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ResultDescriptions"]));
        resultDescriptions = make_shared<DescribeApiDocResponseBodyResultDescriptions>(model1);
      }
    }
    if (m.find("ResultSample") != m.end() && !m["ResultSample"].empty()) {
      resultSample = make_shared<string>(boost::any_cast<string>(m["ResultSample"]));
    }
    if (m.find("ResultType") != m.end() && !m["ResultType"].empty()) {
      resultType = make_shared<string>(boost::any_cast<string>(m["ResultType"]));
    }
    if (m.find("SdkDemos") != m.end() && !m["SdkDemos"].empty()) {
      if (typeid(map<string, boost::any>) == m["SdkDemos"].type()) {
        DescribeApiDocResponseBodySdkDemos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SdkDemos"]));
        sdkDemos = make_shared<DescribeApiDocResponseBodySdkDemos>(model1);
      }
    }
    if (m.find("ServiceTimeout") != m.end() && !m["ServiceTimeout"].empty()) {
      serviceTimeout = make_shared<long>(boost::any_cast<long>(m["ServiceTimeout"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~DescribeApiDocResponseBody() = default;
};
class DescribeApiDocResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeApiDocResponseBody> body{};

  DescribeApiDocResponse() {}

  explicit DescribeApiDocResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeApiDocResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApiDocResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApiDocResponse() = default;
};
class DescribeApiDocsRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> apiName{};
  shared_ptr<string> groupId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> stageName{};

  DescribeApiDocsRequest() {}

  explicit DescribeApiDocsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~DescribeApiDocsRequest() = default;
};
class DescribeApiDocsResponseBodyApiInfosApiInfo : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> apiName{};
  shared_ptr<string> deployedTime{};
  shared_ptr<string> description{};
  shared_ptr<string> groupDescription{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stageName{};

  DescribeApiDocsResponseBodyApiInfosApiInfo() {}

  explicit DescribeApiDocsResponseBodyApiInfosApiInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (deployedTime) {
      res["DeployedTime"] = boost::any(*deployedTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupDescription) {
      res["GroupDescription"] = boost::any(*groupDescription);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("DeployedTime") != m.end() && !m["DeployedTime"].empty()) {
      deployedTime = make_shared<string>(boost::any_cast<string>(m["DeployedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupDescription") != m.end() && !m["GroupDescription"].empty()) {
      groupDescription = make_shared<string>(boost::any_cast<string>(m["GroupDescription"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~DescribeApiDocsResponseBodyApiInfosApiInfo() = default;
};
class DescribeApiDocsResponseBodyApiInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApiDocsResponseBodyApiInfosApiInfo>> apiInfo{};

  DescribeApiDocsResponseBodyApiInfos() {}

  explicit DescribeApiDocsResponseBodyApiInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiInfo) {
      vector<boost::any> temp1;
      for(auto item1:*apiInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApiInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiInfo") != m.end() && !m["ApiInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ApiInfo"].type()) {
        vector<DescribeApiDocsResponseBodyApiInfosApiInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApiInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApiDocsResponseBodyApiInfosApiInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apiInfo = make_shared<vector<DescribeApiDocsResponseBodyApiInfosApiInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeApiDocsResponseBodyApiInfos() = default;
};
class DescribeApiDocsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeApiDocsResponseBodyApiInfos> apiInfos{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeApiDocsResponseBody() {}

  explicit DescribeApiDocsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiInfos) {
      res["ApiInfos"] = apiInfos ? boost::any(apiInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiInfos") != m.end() && !m["ApiInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApiInfos"].type()) {
        DescribeApiDocsResponseBodyApiInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApiInfos"]));
        apiInfos = make_shared<DescribeApiDocsResponseBodyApiInfos>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeApiDocsResponseBody() = default;
};
class DescribeApiDocsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeApiDocsResponseBody> body{};

  DescribeApiDocsResponse() {}

  explicit DescribeApiDocsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeApiDocsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApiDocsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApiDocsResponse() = default;
};
class DescribeApiDocsForBackendRequest : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> apiId{};
  shared_ptr<string> apiName{};
  shared_ptr<string> groupId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> stageName{};

  DescribeApiDocsForBackendRequest() {}

  explicit DescribeApiDocsForBackendRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~DescribeApiDocsForBackendRequest() = default;
};
class DescribeApiDocsForBackendResponseBodyApiInfosApiInfo : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> apiName{};
  shared_ptr<string> deployedTime{};
  shared_ptr<string> description{};
  shared_ptr<string> groupDescription{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stageName{};

  DescribeApiDocsForBackendResponseBodyApiInfosApiInfo() {}

  explicit DescribeApiDocsForBackendResponseBodyApiInfosApiInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (deployedTime) {
      res["DeployedTime"] = boost::any(*deployedTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupDescription) {
      res["GroupDescription"] = boost::any(*groupDescription);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("DeployedTime") != m.end() && !m["DeployedTime"].empty()) {
      deployedTime = make_shared<string>(boost::any_cast<string>(m["DeployedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupDescription") != m.end() && !m["GroupDescription"].empty()) {
      groupDescription = make_shared<string>(boost::any_cast<string>(m["GroupDescription"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~DescribeApiDocsForBackendResponseBodyApiInfosApiInfo() = default;
};
class DescribeApiDocsForBackendResponseBodyApiInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApiDocsForBackendResponseBodyApiInfosApiInfo>> apiInfo{};

  DescribeApiDocsForBackendResponseBodyApiInfos() {}

  explicit DescribeApiDocsForBackendResponseBodyApiInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiInfo) {
      vector<boost::any> temp1;
      for(auto item1:*apiInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApiInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiInfo") != m.end() && !m["ApiInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ApiInfo"].type()) {
        vector<DescribeApiDocsForBackendResponseBodyApiInfosApiInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApiInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApiDocsForBackendResponseBodyApiInfosApiInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apiInfo = make_shared<vector<DescribeApiDocsForBackendResponseBodyApiInfosApiInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeApiDocsForBackendResponseBodyApiInfos() = default;
};
class DescribeApiDocsForBackendResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeApiDocsForBackendResponseBodyApiInfos> apiInfos{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeApiDocsForBackendResponseBody() {}

  explicit DescribeApiDocsForBackendResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiInfos) {
      res["ApiInfos"] = apiInfos ? boost::any(apiInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiInfos") != m.end() && !m["ApiInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApiInfos"].type()) {
        DescribeApiDocsForBackendResponseBodyApiInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApiInfos"]));
        apiInfos = make_shared<DescribeApiDocsForBackendResponseBodyApiInfos>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeApiDocsForBackendResponseBody() = default;
};
class DescribeApiDocsForBackendResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeApiDocsForBackendResponseBody> body{};

  DescribeApiDocsForBackendResponse() {}

  explicit DescribeApiDocsForBackendResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeApiDocsForBackendResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApiDocsForBackendResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApiDocsForBackendResponse() = default;
};
class DescribeApiErrorRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> groupId{};
  shared_ptr<string> startTime{};

  DescribeApiErrorRequest() {}

  explicit DescribeApiErrorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeApiErrorRequest() = default;
};
class DescribeApiErrorResponseBodyClientErrorsClientError : public Darabonba::Model {
public:
  shared_ptr<string> time{};
  shared_ptr<string> value{};

  DescribeApiErrorResponseBodyClientErrorsClientError() {}

  explicit DescribeApiErrorResponseBodyClientErrorsClientError(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (time) {
      res["Time"] = boost::any(*time);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeApiErrorResponseBodyClientErrorsClientError() = default;
};
class DescribeApiErrorResponseBodyClientErrors : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApiErrorResponseBodyClientErrorsClientError>> clientError{};

  DescribeApiErrorResponseBodyClientErrors() {}

  explicit DescribeApiErrorResponseBodyClientErrors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientError) {
      vector<boost::any> temp1;
      for(auto item1:*clientError){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClientError"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientError") != m.end() && !m["ClientError"].empty()) {
      if (typeid(vector<boost::any>) == m["ClientError"].type()) {
        vector<DescribeApiErrorResponseBodyClientErrorsClientError> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClientError"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApiErrorResponseBodyClientErrorsClientError model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clientError = make_shared<vector<DescribeApiErrorResponseBodyClientErrorsClientError>>(expect1);
      }
    }
  }


  virtual ~DescribeApiErrorResponseBodyClientErrors() = default;
};
class DescribeApiErrorResponseBodyServerErrorsServerError : public Darabonba::Model {
public:
  shared_ptr<string> time{};
  shared_ptr<string> value{};

  DescribeApiErrorResponseBodyServerErrorsServerError() {}

  explicit DescribeApiErrorResponseBodyServerErrorsServerError(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (time) {
      res["Time"] = boost::any(*time);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeApiErrorResponseBodyServerErrorsServerError() = default;
};
class DescribeApiErrorResponseBodyServerErrors : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApiErrorResponseBodyServerErrorsServerError>> serverError{};

  DescribeApiErrorResponseBodyServerErrors() {}

  explicit DescribeApiErrorResponseBodyServerErrors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (serverError) {
      vector<boost::any> temp1;
      for(auto item1:*serverError){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ServerError"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ServerError") != m.end() && !m["ServerError"].empty()) {
      if (typeid(vector<boost::any>) == m["ServerError"].type()) {
        vector<DescribeApiErrorResponseBodyServerErrorsServerError> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ServerError"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApiErrorResponseBodyServerErrorsServerError model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serverError = make_shared<vector<DescribeApiErrorResponseBodyServerErrorsServerError>>(expect1);
      }
    }
  }


  virtual ~DescribeApiErrorResponseBodyServerErrors() = default;
};
class DescribeApiErrorResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeApiErrorResponseBodyClientErrors> clientErrors{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeApiErrorResponseBodyServerErrors> serverErrors{};

  DescribeApiErrorResponseBody() {}

  explicit DescribeApiErrorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientErrors) {
      res["ClientErrors"] = clientErrors ? boost::any(clientErrors->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serverErrors) {
      res["ServerErrors"] = serverErrors ? boost::any(serverErrors->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientErrors") != m.end() && !m["ClientErrors"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClientErrors"].type()) {
        DescribeApiErrorResponseBodyClientErrors model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClientErrors"]));
        clientErrors = make_shared<DescribeApiErrorResponseBodyClientErrors>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServerErrors") != m.end() && !m["ServerErrors"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServerErrors"].type()) {
        DescribeApiErrorResponseBodyServerErrors model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServerErrors"]));
        serverErrors = make_shared<DescribeApiErrorResponseBodyServerErrors>(model1);
      }
    }
  }


  virtual ~DescribeApiErrorResponseBody() = default;
};
class DescribeApiErrorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeApiErrorResponseBody> body{};

  DescribeApiErrorResponse() {}

  explicit DescribeApiErrorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeApiErrorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApiErrorResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApiErrorResponse() = default;
};
class DescribeApiGroupDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};

  DescribeApiGroupDetailRequest() {}

  explicit DescribeApiGroupDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
  }


  virtual ~DescribeApiGroupDetailRequest() = default;
};
class DescribeApiGroupDetailResponseBodyDomainItemsDomainItem : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};
  shared_ptr<string> certificateName{};
  shared_ptr<string> domainName{};
  shared_ptr<string> domainNameResolution{};
  shared_ptr<string> domainStatus{};

  DescribeApiGroupDetailResponseBodyDomainItemsDomainItem() {}

  explicit DescribeApiGroupDetailResponseBodyDomainItemsDomainItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (certificateName) {
      res["CertificateName"] = boost::any(*certificateName);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainNameResolution) {
      res["DomainNameResolution"] = boost::any(*domainNameResolution);
    }
    if (domainStatus) {
      res["DomainStatus"] = boost::any(*domainStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("CertificateName") != m.end() && !m["CertificateName"].empty()) {
      certificateName = make_shared<string>(boost::any_cast<string>(m["CertificateName"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DomainNameResolution") != m.end() && !m["DomainNameResolution"].empty()) {
      domainNameResolution = make_shared<string>(boost::any_cast<string>(m["DomainNameResolution"]));
    }
    if (m.find("DomainStatus") != m.end() && !m["DomainStatus"].empty()) {
      domainStatus = make_shared<string>(boost::any_cast<string>(m["DomainStatus"]));
    }
  }


  virtual ~DescribeApiGroupDetailResponseBodyDomainItemsDomainItem() = default;
};
class DescribeApiGroupDetailResponseBodyDomainItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApiGroupDetailResponseBodyDomainItemsDomainItem>> domainItem{};

  DescribeApiGroupDetailResponseBodyDomainItems() {}

  explicit DescribeApiGroupDetailResponseBodyDomainItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainItem) {
      vector<boost::any> temp1;
      for(auto item1:*domainItem){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DomainItem"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainItem") != m.end() && !m["DomainItem"].empty()) {
      if (typeid(vector<boost::any>) == m["DomainItem"].type()) {
        vector<DescribeApiGroupDetailResponseBodyDomainItemsDomainItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DomainItem"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApiGroupDetailResponseBodyDomainItemsDomainItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domainItem = make_shared<vector<DescribeApiGroupDetailResponseBodyDomainItemsDomainItem>>(expect1);
      }
    }
  }


  virtual ~DescribeApiGroupDetailResponseBodyDomainItems() = default;
};
class DescribeApiGroupDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> billingStatus{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<DescribeApiGroupDetailResponseBodyDomainItems> domainItems{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> illegalStatus{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> subDomain{};
  shared_ptr<long> trafficLimit{};

  DescribeApiGroupDetailResponseBody() {}

  explicit DescribeApiGroupDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingStatus) {
      res["BillingStatus"] = boost::any(*billingStatus);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (domainItems) {
      res["DomainItems"] = domainItems ? boost::any(domainItems->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (illegalStatus) {
      res["IllegalStatus"] = boost::any(*illegalStatus);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (subDomain) {
      res["SubDomain"] = boost::any(*subDomain);
    }
    if (trafficLimit) {
      res["TrafficLimit"] = boost::any(*trafficLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingStatus") != m.end() && !m["BillingStatus"].empty()) {
      billingStatus = make_shared<string>(boost::any_cast<string>(m["BillingStatus"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DomainItems") != m.end() && !m["DomainItems"].empty()) {
      if (typeid(map<string, boost::any>) == m["DomainItems"].type()) {
        DescribeApiGroupDetailResponseBodyDomainItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DomainItems"]));
        domainItems = make_shared<DescribeApiGroupDetailResponseBodyDomainItems>(model1);
      }
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("IllegalStatus") != m.end() && !m["IllegalStatus"].empty()) {
      illegalStatus = make_shared<string>(boost::any_cast<string>(m["IllegalStatus"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SubDomain") != m.end() && !m["SubDomain"].empty()) {
      subDomain = make_shared<string>(boost::any_cast<string>(m["SubDomain"]));
    }
    if (m.find("TrafficLimit") != m.end() && !m["TrafficLimit"].empty()) {
      trafficLimit = make_shared<long>(boost::any_cast<long>(m["TrafficLimit"]));
    }
  }


  virtual ~DescribeApiGroupDetailResponseBody() = default;
};
class DescribeApiGroupDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeApiGroupDetailResponseBody> body{};

  DescribeApiGroupDetailResponse() {}

  explicit DescribeApiGroupDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeApiGroupDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApiGroupDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApiGroupDetailResponse() = default;
};
class DescribeApiGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> securityToken{};

  DescribeApiGroupsRequest() {}

  explicit DescribeApiGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeApiGroupsRequest() = default;
};
class DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute : public Darabonba::Model {
public:
  shared_ptr<string> billingStatus{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> illegalStatus{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> regionId{};
  shared_ptr<string> subDomain{};
  shared_ptr<long> trafficLimit{};

  DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute() {}

  explicit DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingStatus) {
      res["BillingStatus"] = boost::any(*billingStatus);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (illegalStatus) {
      res["IllegalStatus"] = boost::any(*illegalStatus);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (subDomain) {
      res["SubDomain"] = boost::any(*subDomain);
    }
    if (trafficLimit) {
      res["TrafficLimit"] = boost::any(*trafficLimit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingStatus") != m.end() && !m["BillingStatus"].empty()) {
      billingStatus = make_shared<string>(boost::any_cast<string>(m["BillingStatus"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("IllegalStatus") != m.end() && !m["IllegalStatus"].empty()) {
      illegalStatus = make_shared<string>(boost::any_cast<string>(m["IllegalStatus"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SubDomain") != m.end() && !m["SubDomain"].empty()) {
      subDomain = make_shared<string>(boost::any_cast<string>(m["SubDomain"]));
    }
    if (m.find("TrafficLimit") != m.end() && !m["TrafficLimit"].empty()) {
      trafficLimit = make_shared<long>(boost::any_cast<long>(m["TrafficLimit"]));
    }
  }


  virtual ~DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute() = default;
};
class DescribeApiGroupsResponseBodyApiGroupAttributes : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute>> apiGroupAttribute{};

  DescribeApiGroupsResponseBodyApiGroupAttributes() {}

  explicit DescribeApiGroupsResponseBodyApiGroupAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiGroupAttribute) {
      vector<boost::any> temp1;
      for(auto item1:*apiGroupAttribute){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApiGroupAttribute"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiGroupAttribute") != m.end() && !m["ApiGroupAttribute"].empty()) {
      if (typeid(vector<boost::any>) == m["ApiGroupAttribute"].type()) {
        vector<DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApiGroupAttribute"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apiGroupAttribute = make_shared<vector<DescribeApiGroupsResponseBodyApiGroupAttributesApiGroupAttribute>>(expect1);
      }
    }
  }


  virtual ~DescribeApiGroupsResponseBodyApiGroupAttributes() = default;
};
class DescribeApiGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeApiGroupsResponseBodyApiGroupAttributes> apiGroupAttributes{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeApiGroupsResponseBody() {}

  explicit DescribeApiGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiGroupAttributes) {
      res["ApiGroupAttributes"] = apiGroupAttributes ? boost::any(apiGroupAttributes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiGroupAttributes") != m.end() && !m["ApiGroupAttributes"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApiGroupAttributes"].type()) {
        DescribeApiGroupsResponseBodyApiGroupAttributes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApiGroupAttributes"]));
        apiGroupAttributes = make_shared<DescribeApiGroupsResponseBodyApiGroupAttributes>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeApiGroupsResponseBody() = default;
};
class DescribeApiGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeApiGroupsResponseBody> body{};

  DescribeApiGroupsResponse() {}

  explicit DescribeApiGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeApiGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApiGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApiGroupsResponse() = default;
};
class DescribeApiLatencyRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> groupId{};
  shared_ptr<string> startTime{};

  DescribeApiLatencyRequest() {}

  explicit DescribeApiLatencyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeApiLatencyRequest() = default;
};
class DescribeApiLatencyResponseBodyLatencysLatency : public Darabonba::Model {
public:
  shared_ptr<string> time{};
  shared_ptr<string> value{};

  DescribeApiLatencyResponseBodyLatencysLatency() {}

  explicit DescribeApiLatencyResponseBodyLatencysLatency(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (time) {
      res["Time"] = boost::any(*time);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeApiLatencyResponseBodyLatencysLatency() = default;
};
class DescribeApiLatencyResponseBodyLatencys : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApiLatencyResponseBodyLatencysLatency>> latency{};

  DescribeApiLatencyResponseBodyLatencys() {}

  explicit DescribeApiLatencyResponseBodyLatencys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (latency) {
      vector<boost::any> temp1;
      for(auto item1:*latency){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Latency"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Latency") != m.end() && !m["Latency"].empty()) {
      if (typeid(vector<boost::any>) == m["Latency"].type()) {
        vector<DescribeApiLatencyResponseBodyLatencysLatency> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Latency"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApiLatencyResponseBodyLatencysLatency model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        latency = make_shared<vector<DescribeApiLatencyResponseBodyLatencysLatency>>(expect1);
      }
    }
  }


  virtual ~DescribeApiLatencyResponseBodyLatencys() = default;
};
class DescribeApiLatencyResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeApiLatencyResponseBodyLatencys> latencys{};
  shared_ptr<string> requestId{};

  DescribeApiLatencyResponseBody() {}

  explicit DescribeApiLatencyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (latencys) {
      res["Latencys"] = latencys ? boost::any(latencys->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Latencys") != m.end() && !m["Latencys"].empty()) {
      if (typeid(map<string, boost::any>) == m["Latencys"].type()) {
        DescribeApiLatencyResponseBodyLatencys model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Latencys"]));
        latencys = make_shared<DescribeApiLatencyResponseBodyLatencys>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeApiLatencyResponseBody() = default;
};
class DescribeApiLatencyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeApiLatencyResponseBody> body{};

  DescribeApiLatencyResponse() {}

  explicit DescribeApiLatencyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeApiLatencyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApiLatencyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApiLatencyResponse() = default;
};
class DescribeApiMarketInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliUid{};
  shared_ptr<string> groupId{};

  DescribeApiMarketInstanceRequest() {}

  explicit DescribeApiMarketInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
  }


  virtual ~DescribeApiMarketInstanceRequest() = default;
};
class DescribeApiMarketInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> instanceAttributes{};
  shared_ptr<string> requestId{};

  DescribeApiMarketInstanceResponseBody() {}

  explicit DescribeApiMarketInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceAttributes) {
      res["InstanceAttributes"] = boost::any(*instanceAttributes);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceAttributes") != m.end() && !m["InstanceAttributes"].empty()) {
      instanceAttributes = make_shared<string>(boost::any_cast<string>(m["InstanceAttributes"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeApiMarketInstanceResponseBody() = default;
};
class DescribeApiMarketInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeApiMarketInstanceResponseBody> body{};

  DescribeApiMarketInstanceResponse() {}

  explicit DescribeApiMarketInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeApiMarketInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApiMarketInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApiMarketInstanceResponse() = default;
};
class DescribeApiQpsRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> groupId{};
  shared_ptr<string> startTime{};

  DescribeApiQpsRequest() {}

  explicit DescribeApiQpsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeApiQpsRequest() = default;
};
class DescribeApiQpsResponseBodyFailsFail : public Darabonba::Model {
public:
  shared_ptr<string> time{};
  shared_ptr<string> value{};

  DescribeApiQpsResponseBodyFailsFail() {}

  explicit DescribeApiQpsResponseBodyFailsFail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (time) {
      res["Time"] = boost::any(*time);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeApiQpsResponseBodyFailsFail() = default;
};
class DescribeApiQpsResponseBodyFails : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApiQpsResponseBodyFailsFail>> fail{};

  DescribeApiQpsResponseBodyFails() {}

  explicit DescribeApiQpsResponseBodyFails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fail) {
      vector<boost::any> temp1;
      for(auto item1:*fail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Fail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Fail") != m.end() && !m["Fail"].empty()) {
      if (typeid(vector<boost::any>) == m["Fail"].type()) {
        vector<DescribeApiQpsResponseBodyFailsFail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Fail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApiQpsResponseBodyFailsFail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fail = make_shared<vector<DescribeApiQpsResponseBodyFailsFail>>(expect1);
      }
    }
  }


  virtual ~DescribeApiQpsResponseBodyFails() = default;
};
class DescribeApiQpsResponseBodySuccessesSuccess : public Darabonba::Model {
public:
  shared_ptr<string> time{};
  shared_ptr<string> value{};

  DescribeApiQpsResponseBodySuccessesSuccess() {}

  explicit DescribeApiQpsResponseBodySuccessesSuccess(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (time) {
      res["Time"] = boost::any(*time);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeApiQpsResponseBodySuccessesSuccess() = default;
};
class DescribeApiQpsResponseBodySuccesses : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApiQpsResponseBodySuccessesSuccess>> success{};

  DescribeApiQpsResponseBodySuccesses() {}

  explicit DescribeApiQpsResponseBodySuccesses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (success) {
      vector<boost::any> temp1;
      for(auto item1:*success){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Success"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      if (typeid(vector<boost::any>) == m["Success"].type()) {
        vector<DescribeApiQpsResponseBodySuccessesSuccess> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Success"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApiQpsResponseBodySuccessesSuccess model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        success = make_shared<vector<DescribeApiQpsResponseBodySuccessesSuccess>>(expect1);
      }
    }
  }


  virtual ~DescribeApiQpsResponseBodySuccesses() = default;
};
class DescribeApiQpsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeApiQpsResponseBodyFails> fails{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeApiQpsResponseBodySuccesses> successes{};

  DescribeApiQpsResponseBody() {}

  explicit DescribeApiQpsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fails) {
      res["Fails"] = fails ? boost::any(fails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (successes) {
      res["Successes"] = successes ? boost::any(successes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Fails") != m.end() && !m["Fails"].empty()) {
      if (typeid(map<string, boost::any>) == m["Fails"].type()) {
        DescribeApiQpsResponseBodyFails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Fails"]));
        fails = make_shared<DescribeApiQpsResponseBodyFails>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Successes") != m.end() && !m["Successes"].empty()) {
      if (typeid(map<string, boost::any>) == m["Successes"].type()) {
        DescribeApiQpsResponseBodySuccesses model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Successes"]));
        successes = make_shared<DescribeApiQpsResponseBodySuccesses>(model1);
      }
    }
  }


  virtual ~DescribeApiQpsResponseBody() = default;
};
class DescribeApiQpsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeApiQpsResponseBody> body{};

  DescribeApiQpsResponse() {}

  explicit DescribeApiQpsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeApiQpsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApiQpsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApiQpsResponse() = default;
};
class DescribeApiRulesRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiIds{};
  shared_ptr<string> groupId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> ruleType{};
  shared_ptr<string> stageName{};

  DescribeApiRulesRequest() {}

  explicit DescribeApiRulesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiIds) {
      res["ApiIds"] = boost::any(*apiIds);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiIds") != m.end() && !m["ApiIds"].empty()) {
      apiIds = make_shared<string>(boost::any_cast<string>(m["ApiIds"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~DescribeApiRulesRequest() = default;
};
class DescribeApiRulesResponseBodyApiRulesApiRule : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> apiName{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleType{};

  DescribeApiRulesResponseBodyApiRulesApiRule() {}

  explicit DescribeApiRulesResponseBodyApiRulesApiRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
  }


  virtual ~DescribeApiRulesResponseBodyApiRulesApiRule() = default;
};
class DescribeApiRulesResponseBodyApiRules : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApiRulesResponseBodyApiRulesApiRule>> apiRule{};

  DescribeApiRulesResponseBodyApiRules() {}

  explicit DescribeApiRulesResponseBodyApiRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiRule) {
      vector<boost::any> temp1;
      for(auto item1:*apiRule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApiRule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiRule") != m.end() && !m["ApiRule"].empty()) {
      if (typeid(vector<boost::any>) == m["ApiRule"].type()) {
        vector<DescribeApiRulesResponseBodyApiRulesApiRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApiRule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApiRulesResponseBodyApiRulesApiRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apiRule = make_shared<vector<DescribeApiRulesResponseBodyApiRulesApiRule>>(expect1);
      }
    }
  }


  virtual ~DescribeApiRulesResponseBodyApiRules() = default;
};
class DescribeApiRulesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeApiRulesResponseBodyApiRules> apiRules{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeApiRulesResponseBody() {}

  explicit DescribeApiRulesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiRules) {
      res["ApiRules"] = apiRules ? boost::any(apiRules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiRules") != m.end() && !m["ApiRules"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApiRules"].type()) {
        DescribeApiRulesResponseBodyApiRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApiRules"]));
        apiRules = make_shared<DescribeApiRulesResponseBodyApiRules>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeApiRulesResponseBody() = default;
};
class DescribeApiRulesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeApiRulesResponseBody> body{};

  DescribeApiRulesResponse() {}

  explicit DescribeApiRulesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeApiRulesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApiRulesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApiRulesResponse() = default;
};
class DescribeApiTrafficRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> groupId{};
  shared_ptr<string> startTime{};

  DescribeApiTrafficRequest() {}

  explicit DescribeApiTrafficRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~DescribeApiTrafficRequest() = default;
};
class DescribeApiTrafficResponseBodyDownloadsDownload : public Darabonba::Model {
public:
  shared_ptr<string> time{};
  shared_ptr<string> value{};

  DescribeApiTrafficResponseBodyDownloadsDownload() {}

  explicit DescribeApiTrafficResponseBodyDownloadsDownload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (time) {
      res["Time"] = boost::any(*time);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeApiTrafficResponseBodyDownloadsDownload() = default;
};
class DescribeApiTrafficResponseBodyDownloads : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApiTrafficResponseBodyDownloadsDownload>> download{};

  DescribeApiTrafficResponseBodyDownloads() {}

  explicit DescribeApiTrafficResponseBodyDownloads(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (download) {
      vector<boost::any> temp1;
      for(auto item1:*download){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Download"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Download") != m.end() && !m["Download"].empty()) {
      if (typeid(vector<boost::any>) == m["Download"].type()) {
        vector<DescribeApiTrafficResponseBodyDownloadsDownload> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Download"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApiTrafficResponseBodyDownloadsDownload model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        download = make_shared<vector<DescribeApiTrafficResponseBodyDownloadsDownload>>(expect1);
      }
    }
  }


  virtual ~DescribeApiTrafficResponseBodyDownloads() = default;
};
class DescribeApiTrafficResponseBodyUploadsUpload : public Darabonba::Model {
public:
  shared_ptr<string> time{};
  shared_ptr<string> value{};

  DescribeApiTrafficResponseBodyUploadsUpload() {}

  explicit DescribeApiTrafficResponseBodyUploadsUpload(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (time) {
      res["Time"] = boost::any(*time);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeApiTrafficResponseBodyUploadsUpload() = default;
};
class DescribeApiTrafficResponseBodyUploads : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApiTrafficResponseBodyUploadsUpload>> upload{};

  DescribeApiTrafficResponseBodyUploads() {}

  explicit DescribeApiTrafficResponseBodyUploads(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (upload) {
      vector<boost::any> temp1;
      for(auto item1:*upload){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Upload"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Upload") != m.end() && !m["Upload"].empty()) {
      if (typeid(vector<boost::any>) == m["Upload"].type()) {
        vector<DescribeApiTrafficResponseBodyUploadsUpload> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Upload"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApiTrafficResponseBodyUploadsUpload model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        upload = make_shared<vector<DescribeApiTrafficResponseBodyUploadsUpload>>(expect1);
      }
    }
  }


  virtual ~DescribeApiTrafficResponseBodyUploads() = default;
};
class DescribeApiTrafficResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeApiTrafficResponseBodyDownloads> downloads{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeApiTrafficResponseBodyUploads> uploads{};

  DescribeApiTrafficResponseBody() {}

  explicit DescribeApiTrafficResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downloads) {
      res["Downloads"] = downloads ? boost::any(downloads->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (uploads) {
      res["Uploads"] = uploads ? boost::any(uploads->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Downloads") != m.end() && !m["Downloads"].empty()) {
      if (typeid(map<string, boost::any>) == m["Downloads"].type()) {
        DescribeApiTrafficResponseBodyDownloads model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Downloads"]));
        downloads = make_shared<DescribeApiTrafficResponseBodyDownloads>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Uploads") != m.end() && !m["Uploads"].empty()) {
      if (typeid(map<string, boost::any>) == m["Uploads"].type()) {
        DescribeApiTrafficResponseBodyUploads model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Uploads"]));
        uploads = make_shared<DescribeApiTrafficResponseBodyUploads>(model1);
      }
    }
  }


  virtual ~DescribeApiTrafficResponseBody() = default;
};
class DescribeApiTrafficResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeApiTrafficResponseBody> body{};

  DescribeApiTrafficResponse() {}

  explicit DescribeApiTrafficResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeApiTrafficResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApiTrafficResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApiTrafficResponse() = default;
};
class DescribeApisRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> apiName{};
  shared_ptr<string> groupId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> visibility{};

  DescribeApisRequest() {}

  explicit DescribeApisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~DescribeApisRequest() = default;
};
class DescribeApisResponseBodyApiInfosApiInfo : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> apiName{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> regionId{};
  shared_ptr<string> visibility{};

  DescribeApisResponseBodyApiInfosApiInfo() {}

  explicit DescribeApisResponseBodyApiInfosApiInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~DescribeApisResponseBodyApiInfosApiInfo() = default;
};
class DescribeApisResponseBodyApiInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApisResponseBodyApiInfosApiInfo>> apiInfo{};

  DescribeApisResponseBodyApiInfos() {}

  explicit DescribeApisResponseBodyApiInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiInfo) {
      vector<boost::any> temp1;
      for(auto item1:*apiInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApiInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiInfo") != m.end() && !m["ApiInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ApiInfo"].type()) {
        vector<DescribeApisResponseBodyApiInfosApiInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApiInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApisResponseBodyApiInfosApiInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apiInfo = make_shared<vector<DescribeApisResponseBodyApiInfosApiInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeApisResponseBodyApiInfos() = default;
};
class DescribeApisResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeApisResponseBodyApiInfos> apiInfos{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeApisResponseBody() {}

  explicit DescribeApisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiInfos) {
      res["ApiInfos"] = apiInfos ? boost::any(apiInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiInfos") != m.end() && !m["ApiInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApiInfos"].type()) {
        DescribeApisResponseBodyApiInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApiInfos"]));
        apiInfos = make_shared<DescribeApisResponseBodyApiInfos>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeApisResponseBody() = default;
};
class DescribeApisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeApisResponseBody> body{};

  DescribeApisResponse() {}

  explicit DescribeApisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeApisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApisResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApisResponse() = default;
};
class DescribeApisByAppRequest : public Darabonba::Model {
public:
  shared_ptr<long> appId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeApisByAppRequest() {}

  explicit DescribeApisByAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeApisByAppRequest() = default;
};
class DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> apiName{};
  shared_ptr<string> authorizationSource{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> operator_{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stageName{};

  DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo() {}

  explicit DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (authorizationSource) {
      res["AuthorizationSource"] = boost::any(*authorizationSource);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("AuthorizationSource") != m.end() && !m["AuthorizationSource"].empty()) {
      authorizationSource = make_shared<string>(boost::any_cast<string>(m["AuthorizationSource"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo() = default;
};
class DescribeApisByAppResponseBodyAppApiRelationInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo>> appApiRelationInfo{};

  DescribeApisByAppResponseBodyAppApiRelationInfos() {}

  explicit DescribeApisByAppResponseBodyAppApiRelationInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appApiRelationInfo) {
      vector<boost::any> temp1;
      for(auto item1:*appApiRelationInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppApiRelationInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppApiRelationInfo") != m.end() && !m["AppApiRelationInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["AppApiRelationInfo"].type()) {
        vector<DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppApiRelationInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appApiRelationInfo = make_shared<vector<DescribeApisByAppResponseBodyAppApiRelationInfosAppApiRelationInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeApisByAppResponseBodyAppApiRelationInfos() = default;
};
class DescribeApisByAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeApisByAppResponseBodyAppApiRelationInfos> appApiRelationInfos{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeApisByAppResponseBody() {}

  explicit DescribeApisByAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appApiRelationInfos) {
      res["AppApiRelationInfos"] = appApiRelationInfos ? boost::any(appApiRelationInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppApiRelationInfos") != m.end() && !m["AppApiRelationInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["AppApiRelationInfos"].type()) {
        DescribeApisByAppResponseBodyAppApiRelationInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AppApiRelationInfos"]));
        appApiRelationInfos = make_shared<DescribeApisByAppResponseBodyAppApiRelationInfos>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeApisByAppResponseBody() = default;
};
class DescribeApisByAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeApisByAppResponseBody> body{};

  DescribeApisByAppResponse() {}

  explicit DescribeApisByAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeApisByAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApisByAppResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApisByAppResponse() = default;
};
class DescribeApisByRuleRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleType{};

  DescribeApisByRuleRequest() {}

  explicit DescribeApisByRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
  }


  virtual ~DescribeApisByRuleRequest() = default;
};
class DescribeApisByRuleResponseBodyApiInfosApiInfo : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> apiName{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stageName{};
  shared_ptr<string> visibility{};

  DescribeApisByRuleResponseBodyApiInfosApiInfo() {}

  explicit DescribeApisByRuleResponseBodyApiInfosApiInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~DescribeApisByRuleResponseBodyApiInfosApiInfo() = default;
};
class DescribeApisByRuleResponseBodyApiInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApisByRuleResponseBodyApiInfosApiInfo>> apiInfo{};

  DescribeApisByRuleResponseBodyApiInfos() {}

  explicit DescribeApisByRuleResponseBodyApiInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiInfo) {
      vector<boost::any> temp1;
      for(auto item1:*apiInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApiInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiInfo") != m.end() && !m["ApiInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ApiInfo"].type()) {
        vector<DescribeApisByRuleResponseBodyApiInfosApiInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApiInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApisByRuleResponseBodyApiInfosApiInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apiInfo = make_shared<vector<DescribeApisByRuleResponseBodyApiInfosApiInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeApisByRuleResponseBodyApiInfos() = default;
};
class DescribeApisByRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeApisByRuleResponseBodyApiInfos> apiInfos{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeApisByRuleResponseBody() {}

  explicit DescribeApisByRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiInfos) {
      res["ApiInfos"] = apiInfos ? boost::any(apiInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiInfos") != m.end() && !m["ApiInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApiInfos"].type()) {
        DescribeApisByRuleResponseBodyApiInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApiInfos"]));
        apiInfos = make_shared<DescribeApisByRuleResponseBodyApiInfos>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeApisByRuleResponseBody() = default;
};
class DescribeApisByRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeApisByRuleResponseBody> body{};

  DescribeApisByRuleResponse() {}

  explicit DescribeApisByRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeApisByRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApisByRuleResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApisByRuleResponse() = default;
};
class DescribeApisForConsoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> apiName{};
  shared_ptr<string> groupId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> stageName{};
  shared_ptr<string> visibility{};

  DescribeApisForConsoleRequest() {}

  explicit DescribeApisForConsoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~DescribeApisForConsoleRequest() = default;
};
class DescribeApisForConsoleResponseBodyApiInfosApiInfoDeployedInfosDeployedInfo : public Darabonba::Model {
public:
  shared_ptr<string> deployedStatus{};
  shared_ptr<string> effectiveVersion{};
  shared_ptr<string> stageName{};

  DescribeApisForConsoleResponseBodyApiInfosApiInfoDeployedInfosDeployedInfo() {}

  explicit DescribeApisForConsoleResponseBodyApiInfosApiInfoDeployedInfosDeployedInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deployedStatus) {
      res["DeployedStatus"] = boost::any(*deployedStatus);
    }
    if (effectiveVersion) {
      res["EffectiveVersion"] = boost::any(*effectiveVersion);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeployedStatus") != m.end() && !m["DeployedStatus"].empty()) {
      deployedStatus = make_shared<string>(boost::any_cast<string>(m["DeployedStatus"]));
    }
    if (m.find("EffectiveVersion") != m.end() && !m["EffectiveVersion"].empty()) {
      effectiveVersion = make_shared<string>(boost::any_cast<string>(m["EffectiveVersion"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~DescribeApisForConsoleResponseBodyApiInfosApiInfoDeployedInfosDeployedInfo() = default;
};
class DescribeApisForConsoleResponseBodyApiInfosApiInfoDeployedInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApisForConsoleResponseBodyApiInfosApiInfoDeployedInfosDeployedInfo>> deployedInfo{};

  DescribeApisForConsoleResponseBodyApiInfosApiInfoDeployedInfos() {}

  explicit DescribeApisForConsoleResponseBodyApiInfosApiInfoDeployedInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deployedInfo) {
      vector<boost::any> temp1;
      for(auto item1:*deployedInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DeployedInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeployedInfo") != m.end() && !m["DeployedInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["DeployedInfo"].type()) {
        vector<DescribeApisForConsoleResponseBodyApiInfosApiInfoDeployedInfosDeployedInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DeployedInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApisForConsoleResponseBodyApiInfosApiInfoDeployedInfosDeployedInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deployedInfo = make_shared<vector<DescribeApisForConsoleResponseBodyApiInfosApiInfoDeployedInfosDeployedInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeApisForConsoleResponseBodyApiInfosApiInfoDeployedInfos() = default;
};
class DescribeApisForConsoleResponseBodyApiInfosApiInfo : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> apiName{};
  shared_ptr<string> createdTime{};
  shared_ptr<DescribeApisForConsoleResponseBodyApiInfosApiInfoDeployedInfos> deployedInfos{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> regionId{};
  shared_ptr<string> visibility{};

  DescribeApisForConsoleResponseBodyApiInfosApiInfo() {}

  explicit DescribeApisForConsoleResponseBodyApiInfosApiInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (deployedInfos) {
      res["DeployedInfos"] = deployedInfos ? boost::any(deployedInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("DeployedInfos") != m.end() && !m["DeployedInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeployedInfos"].type()) {
        DescribeApisForConsoleResponseBodyApiInfosApiInfoDeployedInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeployedInfos"]));
        deployedInfos = make_shared<DescribeApisForConsoleResponseBodyApiInfosApiInfoDeployedInfos>(model1);
      }
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~DescribeApisForConsoleResponseBodyApiInfosApiInfo() = default;
};
class DescribeApisForConsoleResponseBodyApiInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApisForConsoleResponseBodyApiInfosApiInfo>> apiInfo{};

  DescribeApisForConsoleResponseBodyApiInfos() {}

  explicit DescribeApisForConsoleResponseBodyApiInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiInfo) {
      vector<boost::any> temp1;
      for(auto item1:*apiInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApiInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiInfo") != m.end() && !m["ApiInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ApiInfo"].type()) {
        vector<DescribeApisForConsoleResponseBodyApiInfosApiInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApiInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApisForConsoleResponseBodyApiInfosApiInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apiInfo = make_shared<vector<DescribeApisForConsoleResponseBodyApiInfosApiInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeApisForConsoleResponseBodyApiInfos() = default;
};
class DescribeApisForConsoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeApisForConsoleResponseBodyApiInfos> apiInfos{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeApisForConsoleResponseBody() {}

  explicit DescribeApisForConsoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiInfos) {
      res["ApiInfos"] = apiInfos ? boost::any(apiInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiInfos") != m.end() && !m["ApiInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApiInfos"].type()) {
        DescribeApisForConsoleResponseBodyApiInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApiInfos"]));
        apiInfos = make_shared<DescribeApisForConsoleResponseBodyApiInfos>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeApisForConsoleResponseBody() = default;
};
class DescribeApisForConsoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeApisForConsoleResponseBody> body{};

  DescribeApisForConsoleResponse() {}

  explicit DescribeApisForConsoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeApisForConsoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApisForConsoleResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApisForConsoleResponse() = default;
};
class DescribeAppRequest : public Darabonba::Model {
public:
  shared_ptr<long> appId{};

  DescribeAppRequest() {}

  explicit DescribeAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
  }


  virtual ~DescribeAppRequest() = default;
};
class DescribeAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> requestId{};

  DescribeAppResponseBody() {}

  explicit DescribeAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAppResponseBody() = default;
};
class DescribeAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAppResponseBody> body{};

  DescribeAppResponse() {}

  explicit DescribeAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppResponse() = default;
};
class DescribeAppSecuritiesRequest : public Darabonba::Model {
public:
  shared_ptr<long> appId{};
  shared_ptr<string> securityToken{};

  DescribeAppSecuritiesRequest() {}

  explicit DescribeAppSecuritiesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeAppSecuritiesRequest() = default;
};
class DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity : public Darabonba::Model {
public:
  shared_ptr<string> appCode{};
  shared_ptr<string> appKey{};
  shared_ptr<string> appSecret{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> modifiedTime{};

  DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity() {}

  explicit DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCode) {
      res["AppCode"] = boost::any(*appCode);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (appSecret) {
      res["AppSecret"] = boost::any(*appSecret);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCode") != m.end() && !m["AppCode"].empty()) {
      appCode = make_shared<string>(boost::any_cast<string>(m["AppCode"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("AppSecret") != m.end() && !m["AppSecret"].empty()) {
      appSecret = make_shared<string>(boost::any_cast<string>(m["AppSecret"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
  }


  virtual ~DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity() = default;
};
class DescribeAppSecuritiesResponseBodyAppSecuritys : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity>> appSecurity{};

  DescribeAppSecuritiesResponseBodyAppSecuritys() {}

  explicit DescribeAppSecuritiesResponseBodyAppSecuritys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appSecurity) {
      vector<boost::any> temp1;
      for(auto item1:*appSecurity){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppSecurity"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppSecurity") != m.end() && !m["AppSecurity"].empty()) {
      if (typeid(vector<boost::any>) == m["AppSecurity"].type()) {
        vector<DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppSecurity"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appSecurity = make_shared<vector<DescribeAppSecuritiesResponseBodyAppSecuritysAppSecurity>>(expect1);
      }
    }
  }


  virtual ~DescribeAppSecuritiesResponseBodyAppSecuritys() = default;
};
class DescribeAppSecuritiesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAppSecuritiesResponseBodyAppSecuritys> appSecuritys{};
  shared_ptr<string> requestId{};

  DescribeAppSecuritiesResponseBody() {}

  explicit DescribeAppSecuritiesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appSecuritys) {
      res["AppSecuritys"] = appSecuritys ? boost::any(appSecuritys->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppSecuritys") != m.end() && !m["AppSecuritys"].empty()) {
      if (typeid(map<string, boost::any>) == m["AppSecuritys"].type()) {
        DescribeAppSecuritiesResponseBodyAppSecuritys model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AppSecuritys"]));
        appSecuritys = make_shared<DescribeAppSecuritiesResponseBodyAppSecuritys>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAppSecuritiesResponseBody() = default;
};
class DescribeAppSecuritiesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAppSecuritiesResponseBody> body{};

  DescribeAppSecuritiesResponse() {}

  explicit DescribeAppSecuritiesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAppSecuritiesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppSecuritiesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppSecuritiesResponse() = default;
};
class DescribeAppSecurityRequest : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};

  DescribeAppSecurityRequest() {}

  explicit DescribeAppSecurityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
  }


  virtual ~DescribeAppSecurityRequest() = default;
};
class DescribeAppSecurityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};
  shared_ptr<string> appSecret{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> requestId{};

  DescribeAppSecurityResponseBody() {}

  explicit DescribeAppSecurityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (appSecret) {
      res["AppSecret"] = boost::any(*appSecret);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("AppSecret") != m.end() && !m["AppSecret"].empty()) {
      appSecret = make_shared<string>(boost::any_cast<string>(m["AppSecret"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAppSecurityResponseBody() = default;
};
class DescribeAppSecurityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAppSecurityResponseBody> body{};

  DescribeAppSecurityResponse() {}

  explicit DescribeAppSecurityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAppSecurityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppSecurityResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppSecurityResponse() = default;
};
class DescribeAppSecurityForInnerRequest : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<long> appId{};
  shared_ptr<string> securityToken{};

  DescribeAppSecurityForInnerRequest() {}

  explicit DescribeAppSecurityForInnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeAppSecurityForInnerRequest() = default;
};
class DescribeAppSecurityForInnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appCode{};
  shared_ptr<string> appKey{};
  shared_ptr<string> appSecret{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> requestId{};

  DescribeAppSecurityForInnerResponseBody() {}

  explicit DescribeAppSecurityForInnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCode) {
      res["AppCode"] = boost::any(*appCode);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (appSecret) {
      res["AppSecret"] = boost::any(*appSecret);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCode") != m.end() && !m["AppCode"].empty()) {
      appCode = make_shared<string>(boost::any_cast<string>(m["AppCode"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("AppSecret") != m.end() && !m["AppSecret"].empty()) {
      appSecret = make_shared<string>(boost::any_cast<string>(m["AppSecret"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeAppSecurityForInnerResponseBody() = default;
};
class DescribeAppSecurityForInnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAppSecurityForInnerResponseBody> body{};

  DescribeAppSecurityForInnerResponse() {}

  explicit DescribeAppSecurityForInnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAppSecurityForInnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppSecurityForInnerResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppSecurityForInnerResponse() = default;
};
class DescribeAppsRequest : public Darabonba::Model {
public:
  shared_ptr<long> appId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeAppsRequest() {}

  explicit DescribeAppsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeAppsRequest() = default;
};
class DescribeAppsResponseBodyAppsApp : public Darabonba::Model {
public:
  shared_ptr<long> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> modifiedTime{};

  DescribeAppsResponseBodyAppsApp() {}

  explicit DescribeAppsResponseBodyAppsApp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
  }


  virtual ~DescribeAppsResponseBodyAppsApp() = default;
};
class DescribeAppsResponseBodyApps : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAppsResponseBodyAppsApp>> app{};

  DescribeAppsResponseBodyApps() {}

  explicit DescribeAppsResponseBodyApps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (app) {
      vector<boost::any> temp1;
      for(auto item1:*app){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["App"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      if (typeid(vector<boost::any>) == m["App"].type()) {
        vector<DescribeAppsResponseBodyAppsApp> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["App"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAppsResponseBodyAppsApp model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        app = make_shared<vector<DescribeAppsResponseBodyAppsApp>>(expect1);
      }
    }
  }


  virtual ~DescribeAppsResponseBodyApps() = default;
};
class DescribeAppsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAppsResponseBodyApps> apps{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeAppsResponseBody() {}

  explicit DescribeAppsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apps) {
      res["Apps"] = apps ? boost::any(apps->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Apps") != m.end() && !m["Apps"].empty()) {
      if (typeid(map<string, boost::any>) == m["Apps"].type()) {
        DescribeAppsResponseBodyApps model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Apps"]));
        apps = make_shared<DescribeAppsResponseBodyApps>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeAppsResponseBody() = default;
};
class DescribeAppsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAppsResponseBody> body{};

  DescribeAppsResponse() {}

  explicit DescribeAppsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAppsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppsResponse() = default;
};
class DescribeAppsByApiRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> groupId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> stageName{};

  DescribeAppsByApiRequest() {}

  explicit DescribeAppsByApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~DescribeAppsByApiRequest() = default;
};
class DescribeAppsByApiResponseBodyAppApiRelationInfosAppApiRelationInfo : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> authorizationSource{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> operator_{};
  shared_ptr<string> stageName{};

  DescribeAppsByApiResponseBodyAppApiRelationInfosAppApiRelationInfo() {}

  explicit DescribeAppsByApiResponseBodyAppApiRelationInfosAppApiRelationInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (authorizationSource) {
      res["AuthorizationSource"] = boost::any(*authorizationSource);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AuthorizationSource") != m.end() && !m["AuthorizationSource"].empty()) {
      authorizationSource = make_shared<string>(boost::any_cast<string>(m["AuthorizationSource"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~DescribeAppsByApiResponseBodyAppApiRelationInfosAppApiRelationInfo() = default;
};
class DescribeAppsByApiResponseBodyAppApiRelationInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAppsByApiResponseBodyAppApiRelationInfosAppApiRelationInfo>> appApiRelationInfo{};

  DescribeAppsByApiResponseBodyAppApiRelationInfos() {}

  explicit DescribeAppsByApiResponseBodyAppApiRelationInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appApiRelationInfo) {
      vector<boost::any> temp1;
      for(auto item1:*appApiRelationInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppApiRelationInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppApiRelationInfo") != m.end() && !m["AppApiRelationInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["AppApiRelationInfo"].type()) {
        vector<DescribeAppsByApiResponseBodyAppApiRelationInfosAppApiRelationInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppApiRelationInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAppsByApiResponseBodyAppApiRelationInfosAppApiRelationInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appApiRelationInfo = make_shared<vector<DescribeAppsByApiResponseBodyAppApiRelationInfosAppApiRelationInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeAppsByApiResponseBodyAppApiRelationInfos() = default;
};
class DescribeAppsByApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAppsByApiResponseBodyAppApiRelationInfos> appApiRelationInfos{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeAppsByApiResponseBody() {}

  explicit DescribeAppsByApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appApiRelationInfos) {
      res["AppApiRelationInfos"] = appApiRelationInfos ? boost::any(appApiRelationInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppApiRelationInfos") != m.end() && !m["AppApiRelationInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["AppApiRelationInfos"].type()) {
        DescribeAppsByApiResponseBodyAppApiRelationInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AppApiRelationInfos"]));
        appApiRelationInfos = make_shared<DescribeAppsByApiResponseBodyAppApiRelationInfos>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeAppsByApiResponseBody() = default;
};
class DescribeAppsByApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAppsByApiResponseBody> body{};

  DescribeAppsByApiResponse() {}

  explicit DescribeAppsByApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAppsByApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppsByApiResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppsByApiResponse() = default;
};
class DescribeAppsForProviderRequest : public Darabonba::Model {
public:
  shared_ptr<long> appId{};
  shared_ptr<string> appOwner{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeAppsForProviderRequest() {}

  explicit DescribeAppsForProviderRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appOwner) {
      res["AppOwner"] = boost::any(*appOwner);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("AppOwner") != m.end() && !m["AppOwner"].empty()) {
      appOwner = make_shared<string>(boost::any_cast<string>(m["AppOwner"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeAppsForProviderRequest() = default;
};
class DescribeAppsForProviderResponseBodyAppsApp : public Darabonba::Model {
public:
  shared_ptr<long> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> modifiedTime{};

  DescribeAppsForProviderResponseBodyAppsApp() {}

  explicit DescribeAppsForProviderResponseBodyAppsApp(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
  }


  virtual ~DescribeAppsForProviderResponseBodyAppsApp() = default;
};
class DescribeAppsForProviderResponseBodyApps : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAppsForProviderResponseBodyAppsApp>> app{};

  DescribeAppsForProviderResponseBodyApps() {}

  explicit DescribeAppsForProviderResponseBodyApps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (app) {
      vector<boost::any> temp1;
      for(auto item1:*app){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["App"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("App") != m.end() && !m["App"].empty()) {
      if (typeid(vector<boost::any>) == m["App"].type()) {
        vector<DescribeAppsForProviderResponseBodyAppsApp> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["App"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAppsForProviderResponseBodyAppsApp model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        app = make_shared<vector<DescribeAppsForProviderResponseBodyAppsApp>>(expect1);
      }
    }
  }


  virtual ~DescribeAppsForProviderResponseBodyApps() = default;
};
class DescribeAppsForProviderResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAppsForProviderResponseBodyApps> apps{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeAppsForProviderResponseBody() {}

  explicit DescribeAppsForProviderResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apps) {
      res["Apps"] = apps ? boost::any(apps->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Apps") != m.end() && !m["Apps"].empty()) {
      if (typeid(map<string, boost::any>) == m["Apps"].type()) {
        DescribeAppsForProviderResponseBodyApps model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Apps"]));
        apps = make_shared<DescribeAppsForProviderResponseBodyApps>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeAppsForProviderResponseBody() = default;
};
class DescribeAppsForProviderResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAppsForProviderResponseBody> body{};

  DescribeAppsForProviderResponse() {}

  explicit DescribeAppsForProviderResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAppsForProviderResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAppsForProviderResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAppsForProviderResponse() = default;
};
class DescribeAvailableVipsRequest : public Darabonba::Model {
public:
  shared_ptr<string> vip{};

  DescribeAvailableVipsRequest() {}

  explicit DescribeAvailableVipsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vip) {
      res["Vip"] = boost::any(*vip);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Vip") != m.end() && !m["Vip"].empty()) {
      vip = make_shared<string>(boost::any_cast<string>(m["Vip"]));
    }
  }


  virtual ~DescribeAvailableVipsRequest() = default;
};
class DescribeAvailableVipsResponseBodyAvailableVips : public Darabonba::Model {
public:
  shared_ptr<vector<string>> availableVip{};

  DescribeAvailableVipsResponseBodyAvailableVips() {}

  explicit DescribeAvailableVipsResponseBodyAvailableVips(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableVip) {
      res["AvailableVip"] = boost::any(*availableVip);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableVip") != m.end() && !m["AvailableVip"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["AvailableVip"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["AvailableVip"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      availableVip = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeAvailableVipsResponseBodyAvailableVips() = default;
};
class DescribeAvailableVipsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAvailableVipsResponseBodyAvailableVips> availableVips{};

  DescribeAvailableVipsResponseBody() {}

  explicit DescribeAvailableVipsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableVips) {
      res["AvailableVips"] = availableVips ? boost::any(availableVips->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableVips") != m.end() && !m["AvailableVips"].empty()) {
      if (typeid(map<string, boost::any>) == m["AvailableVips"].type()) {
        DescribeAvailableVipsResponseBodyAvailableVips model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AvailableVips"]));
        availableVips = make_shared<DescribeAvailableVipsResponseBodyAvailableVips>(model1);
      }
    }
  }


  virtual ~DescribeAvailableVipsResponseBody() = default;
};
class DescribeAvailableVipsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAvailableVipsResponseBody> body{};

  DescribeAvailableVipsResponse() {}

  explicit DescribeAvailableVipsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeAvailableVipsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAvailableVipsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAvailableVipsResponse() = default;
};
class DescribeBidByUserIdForInnerRequest : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> securityToken{};

  DescribeBidByUserIdForInnerRequest() {}

  explicit DescribeBidByUserIdForInnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeBidByUserIdForInnerRequest() = default;
};
class DescribeBidByUserIdForInnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> bid{};
  shared_ptr<string> requestId{};

  DescribeBidByUserIdForInnerResponseBody() {}

  explicit DescribeBidByUserIdForInnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeBidByUserIdForInnerResponseBody() = default;
};
class DescribeBidByUserIdForInnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBidByUserIdForInnerResponseBody> body{};

  DescribeBidByUserIdForInnerResponse() {}

  explicit DescribeBidByUserIdForInnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeBidByUserIdForInnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBidByUserIdForInnerResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBidByUserIdForInnerResponse() = default;
};
class DescribeBlackListsRequest : public Darabonba::Model {
public:
  shared_ptr<string> blackType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeBlackListsRequest() {}

  explicit DescribeBlackListsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blackType) {
      res["BlackType"] = boost::any(*blackType);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlackType") != m.end() && !m["BlackType"].empty()) {
      blackType = make_shared<string>(boost::any_cast<string>(m["BlackType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeBlackListsRequest() = default;
};
class DescribeBlackListsResponseBodyBlackListsBlackList : public Darabonba::Model {
public:
  shared_ptr<string> blackContent{};
  shared_ptr<string> blackType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> modifiedTime{};

  DescribeBlackListsResponseBodyBlackListsBlackList() {}

  explicit DescribeBlackListsResponseBodyBlackListsBlackList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blackContent) {
      res["BlackContent"] = boost::any(*blackContent);
    }
    if (blackType) {
      res["BlackType"] = boost::any(*blackType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlackContent") != m.end() && !m["BlackContent"].empty()) {
      blackContent = make_shared<string>(boost::any_cast<string>(m["BlackContent"]));
    }
    if (m.find("BlackType") != m.end() && !m["BlackType"].empty()) {
      blackType = make_shared<string>(boost::any_cast<string>(m["BlackType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
  }


  virtual ~DescribeBlackListsResponseBodyBlackListsBlackList() = default;
};
class DescribeBlackListsResponseBodyBlackLists : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBlackListsResponseBodyBlackListsBlackList>> blackList{};

  DescribeBlackListsResponseBodyBlackLists() {}

  explicit DescribeBlackListsResponseBodyBlackLists(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blackList) {
      vector<boost::any> temp1;
      for(auto item1:*blackList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BlackList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlackList") != m.end() && !m["BlackList"].empty()) {
      if (typeid(vector<boost::any>) == m["BlackList"].type()) {
        vector<DescribeBlackListsResponseBodyBlackListsBlackList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BlackList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBlackListsResponseBodyBlackListsBlackList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        blackList = make_shared<vector<DescribeBlackListsResponseBodyBlackListsBlackList>>(expect1);
      }
    }
  }


  virtual ~DescribeBlackListsResponseBodyBlackLists() = default;
};
class DescribeBlackListsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeBlackListsResponseBodyBlackLists> blackLists{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeBlackListsResponseBody() {}

  explicit DescribeBlackListsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blackLists) {
      res["BlackLists"] = blackLists ? boost::any(blackLists->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlackLists") != m.end() && !m["BlackLists"].empty()) {
      if (typeid(map<string, boost::any>) == m["BlackLists"].type()) {
        DescribeBlackListsResponseBodyBlackLists model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BlackLists"]));
        blackLists = make_shared<DescribeBlackListsResponseBodyBlackLists>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeBlackListsResponseBody() = default;
};
class DescribeBlackListsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBlackListsResponseBody> body{};

  DescribeBlackListsResponse() {}

  explicit DescribeBlackListsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeBlackListsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBlackListsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBlackListsResponse() = default;
};
class DescribeDeployedApiRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> groupId{};
  shared_ptr<string> stageName{};

  DescribeDeployedApiRequest() {}

  explicit DescribeDeployedApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~DescribeDeployedApiRequest() = default;
};
class DescribeDeployedApiResponseBodyConstantParametersConstantParameter : public Darabonba::Model {
public:
  shared_ptr<string> constantValue{};
  shared_ptr<string> description{};
  shared_ptr<string> location{};
  shared_ptr<string> serviceParameterName{};

  DescribeDeployedApiResponseBodyConstantParametersConstantParameter() {}

  explicit DescribeDeployedApiResponseBodyConstantParametersConstantParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (constantValue) {
      res["ConstantValue"] = boost::any(*constantValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (serviceParameterName) {
      res["ServiceParameterName"] = boost::any(*serviceParameterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConstantValue") != m.end() && !m["ConstantValue"].empty()) {
      constantValue = make_shared<string>(boost::any_cast<string>(m["ConstantValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("ServiceParameterName") != m.end() && !m["ServiceParameterName"].empty()) {
      serviceParameterName = make_shared<string>(boost::any_cast<string>(m["ServiceParameterName"]));
    }
  }


  virtual ~DescribeDeployedApiResponseBodyConstantParametersConstantParameter() = default;
};
class DescribeDeployedApiResponseBodyConstantParameters : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDeployedApiResponseBodyConstantParametersConstantParameter>> constantParameter{};

  DescribeDeployedApiResponseBodyConstantParameters() {}

  explicit DescribeDeployedApiResponseBodyConstantParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (constantParameter) {
      vector<boost::any> temp1;
      for(auto item1:*constantParameter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConstantParameter"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConstantParameter") != m.end() && !m["ConstantParameter"].empty()) {
      if (typeid(vector<boost::any>) == m["ConstantParameter"].type()) {
        vector<DescribeDeployedApiResponseBodyConstantParametersConstantParameter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConstantParameter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDeployedApiResponseBodyConstantParametersConstantParameter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        constantParameter = make_shared<vector<DescribeDeployedApiResponseBodyConstantParametersConstantParameter>>(expect1);
      }
    }
  }


  virtual ~DescribeDeployedApiResponseBodyConstantParameters() = default;
};
class DescribeDeployedApiResponseBodyErrorCodeSamplesErrorCodeSample : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> description{};
  shared_ptr<string> message{};

  DescribeDeployedApiResponseBodyErrorCodeSamplesErrorCodeSample() {}

  explicit DescribeDeployedApiResponseBodyErrorCodeSamplesErrorCodeSample(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~DescribeDeployedApiResponseBodyErrorCodeSamplesErrorCodeSample() = default;
};
class DescribeDeployedApiResponseBodyErrorCodeSamples : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDeployedApiResponseBodyErrorCodeSamplesErrorCodeSample>> errorCodeSample{};

  DescribeDeployedApiResponseBodyErrorCodeSamples() {}

  explicit DescribeDeployedApiResponseBodyErrorCodeSamples(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCodeSample) {
      vector<boost::any> temp1;
      for(auto item1:*errorCodeSample){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ErrorCodeSample"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCodeSample") != m.end() && !m["ErrorCodeSample"].empty()) {
      if (typeid(vector<boost::any>) == m["ErrorCodeSample"].type()) {
        vector<DescribeDeployedApiResponseBodyErrorCodeSamplesErrorCodeSample> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ErrorCodeSample"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDeployedApiResponseBodyErrorCodeSamplesErrorCodeSample model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        errorCodeSample = make_shared<vector<DescribeDeployedApiResponseBodyErrorCodeSamplesErrorCodeSample>>(expect1);
      }
    }
  }


  virtual ~DescribeDeployedApiResponseBodyErrorCodeSamples() = default;
};
class DescribeDeployedApiResponseBodyFunctionComputeConfig : public Darabonba::Model {
public:
  shared_ptr<string> fcRegionId{};
  shared_ptr<string> functionName{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> serviceName{};

  DescribeDeployedApiResponseBodyFunctionComputeConfig() {}

  explicit DescribeDeployedApiResponseBodyFunctionComputeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fcRegionId) {
      res["FcRegionId"] = boost::any(*fcRegionId);
    }
    if (functionName) {
      res["FunctionName"] = boost::any(*functionName);
    }
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FcRegionId") != m.end() && !m["FcRegionId"].empty()) {
      fcRegionId = make_shared<string>(boost::any_cast<string>(m["FcRegionId"]));
    }
    if (m.find("FunctionName") != m.end() && !m["FunctionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["FunctionName"]));
    }
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~DescribeDeployedApiResponseBodyFunctionComputeConfig() = default;
};
class DescribeDeployedApiResponseBodyPathParametersPathParameter : public Darabonba::Model {
public:
  shared_ptr<string> apiParameterName{};
  shared_ptr<string> demoValue{};
  shared_ptr<string> description{};
  shared_ptr<string> serviceParameterName{};

  DescribeDeployedApiResponseBodyPathParametersPathParameter() {}

  explicit DescribeDeployedApiResponseBodyPathParametersPathParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiParameterName) {
      res["ApiParameterName"] = boost::any(*apiParameterName);
    }
    if (demoValue) {
      res["DemoValue"] = boost::any(*demoValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (serviceParameterName) {
      res["ServiceParameterName"] = boost::any(*serviceParameterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiParameterName") != m.end() && !m["ApiParameterName"].empty()) {
      apiParameterName = make_shared<string>(boost::any_cast<string>(m["ApiParameterName"]));
    }
    if (m.find("DemoValue") != m.end() && !m["DemoValue"].empty()) {
      demoValue = make_shared<string>(boost::any_cast<string>(m["DemoValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ServiceParameterName") != m.end() && !m["ServiceParameterName"].empty()) {
      serviceParameterName = make_shared<string>(boost::any_cast<string>(m["ServiceParameterName"]));
    }
  }


  virtual ~DescribeDeployedApiResponseBodyPathParametersPathParameter() = default;
};
class DescribeDeployedApiResponseBodyPathParameters : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDeployedApiResponseBodyPathParametersPathParameter>> pathParameter{};

  DescribeDeployedApiResponseBodyPathParameters() {}

  explicit DescribeDeployedApiResponseBodyPathParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pathParameter) {
      vector<boost::any> temp1;
      for(auto item1:*pathParameter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PathParameter"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PathParameter") != m.end() && !m["PathParameter"].empty()) {
      if (typeid(vector<boost::any>) == m["PathParameter"].type()) {
        vector<DescribeDeployedApiResponseBodyPathParametersPathParameter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PathParameter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDeployedApiResponseBodyPathParametersPathParameter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pathParameter = make_shared<vector<DescribeDeployedApiResponseBodyPathParametersPathParameter>>(expect1);
      }
    }
  }


  virtual ~DescribeDeployedApiResponseBodyPathParameters() = default;
};
class DescribeDeployedApiResponseBodyRequestBodyRequestParam : public Darabonba::Model {
public:
  shared_ptr<string> apiParameterName{};
  shared_ptr<string> defaultValue{};
  shared_ptr<string> demoValue{};
  shared_ptr<string> description{};
  shared_ptr<string> docOrder{};
  shared_ptr<string> docShow{};
  shared_ptr<string> enumValue{};
  shared_ptr<string> jsonScheme{};
  shared_ptr<long> maxLength{};
  shared_ptr<long> maxValue{};
  shared_ptr<long> minLength{};
  shared_ptr<long> minValue{};
  shared_ptr<string> parameterType{};
  shared_ptr<string> regularExpression{};
  shared_ptr<string> required{};
  shared_ptr<string> serviceParameterName{};

  DescribeDeployedApiResponseBodyRequestBodyRequestParam() {}

  explicit DescribeDeployedApiResponseBodyRequestBodyRequestParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiParameterName) {
      res["ApiParameterName"] = boost::any(*apiParameterName);
    }
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (demoValue) {
      res["DemoValue"] = boost::any(*demoValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (docOrder) {
      res["DocOrder"] = boost::any(*docOrder);
    }
    if (docShow) {
      res["DocShow"] = boost::any(*docShow);
    }
    if (enumValue) {
      res["EnumValue"] = boost::any(*enumValue);
    }
    if (jsonScheme) {
      res["JsonScheme"] = boost::any(*jsonScheme);
    }
    if (maxLength) {
      res["MaxLength"] = boost::any(*maxLength);
    }
    if (maxValue) {
      res["MaxValue"] = boost::any(*maxValue);
    }
    if (minLength) {
      res["MinLength"] = boost::any(*minLength);
    }
    if (minValue) {
      res["MinValue"] = boost::any(*minValue);
    }
    if (parameterType) {
      res["ParameterType"] = boost::any(*parameterType);
    }
    if (regularExpression) {
      res["RegularExpression"] = boost::any(*regularExpression);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    if (serviceParameterName) {
      res["ServiceParameterName"] = boost::any(*serviceParameterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiParameterName") != m.end() && !m["ApiParameterName"].empty()) {
      apiParameterName = make_shared<string>(boost::any_cast<string>(m["ApiParameterName"]));
    }
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("DemoValue") != m.end() && !m["DemoValue"].empty()) {
      demoValue = make_shared<string>(boost::any_cast<string>(m["DemoValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DocOrder") != m.end() && !m["DocOrder"].empty()) {
      docOrder = make_shared<string>(boost::any_cast<string>(m["DocOrder"]));
    }
    if (m.find("DocShow") != m.end() && !m["DocShow"].empty()) {
      docShow = make_shared<string>(boost::any_cast<string>(m["DocShow"]));
    }
    if (m.find("EnumValue") != m.end() && !m["EnumValue"].empty()) {
      enumValue = make_shared<string>(boost::any_cast<string>(m["EnumValue"]));
    }
    if (m.find("JsonScheme") != m.end() && !m["JsonScheme"].empty()) {
      jsonScheme = make_shared<string>(boost::any_cast<string>(m["JsonScheme"]));
    }
    if (m.find("MaxLength") != m.end() && !m["MaxLength"].empty()) {
      maxLength = make_shared<long>(boost::any_cast<long>(m["MaxLength"]));
    }
    if (m.find("MaxValue") != m.end() && !m["MaxValue"].empty()) {
      maxValue = make_shared<long>(boost::any_cast<long>(m["MaxValue"]));
    }
    if (m.find("MinLength") != m.end() && !m["MinLength"].empty()) {
      minLength = make_shared<long>(boost::any_cast<long>(m["MinLength"]));
    }
    if (m.find("MinValue") != m.end() && !m["MinValue"].empty()) {
      minValue = make_shared<long>(boost::any_cast<long>(m["MinValue"]));
    }
    if (m.find("ParameterType") != m.end() && !m["ParameterType"].empty()) {
      parameterType = make_shared<string>(boost::any_cast<string>(m["ParameterType"]));
    }
    if (m.find("RegularExpression") != m.end() && !m["RegularExpression"].empty()) {
      regularExpression = make_shared<string>(boost::any_cast<string>(m["RegularExpression"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<string>(boost::any_cast<string>(m["Required"]));
    }
    if (m.find("ServiceParameterName") != m.end() && !m["ServiceParameterName"].empty()) {
      serviceParameterName = make_shared<string>(boost::any_cast<string>(m["ServiceParameterName"]));
    }
  }


  virtual ~DescribeDeployedApiResponseBodyRequestBodyRequestParam() = default;
};
class DescribeDeployedApiResponseBodyRequestBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDeployedApiResponseBodyRequestBodyRequestParam>> requestParam{};

  DescribeDeployedApiResponseBodyRequestBody() {}

  explicit DescribeDeployedApiResponseBodyRequestBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestParam) {
      vector<boost::any> temp1;
      for(auto item1:*requestParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RequestParam"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestParam") != m.end() && !m["RequestParam"].empty()) {
      if (typeid(vector<boost::any>) == m["RequestParam"].type()) {
        vector<DescribeDeployedApiResponseBodyRequestBodyRequestParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RequestParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDeployedApiResponseBodyRequestBodyRequestParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        requestParam = make_shared<vector<DescribeDeployedApiResponseBodyRequestBodyRequestParam>>(expect1);
      }
    }
  }


  virtual ~DescribeDeployedApiResponseBodyRequestBody() = default;
};
class DescribeDeployedApiResponseBodyRequestHeadersRequestParam : public Darabonba::Model {
public:
  shared_ptr<string> apiParameterName{};
  shared_ptr<string> defaultValue{};
  shared_ptr<string> demoValue{};
  shared_ptr<string> description{};
  shared_ptr<string> docOrder{};
  shared_ptr<string> docShow{};
  shared_ptr<string> enumValue{};
  shared_ptr<string> jsonScheme{};
  shared_ptr<long> maxLength{};
  shared_ptr<long> maxValue{};
  shared_ptr<long> minLength{};
  shared_ptr<long> minValue{};
  shared_ptr<string> parameterType{};
  shared_ptr<string> regularExpression{};
  shared_ptr<string> required{};
  shared_ptr<string> serviceParameterName{};

  DescribeDeployedApiResponseBodyRequestHeadersRequestParam() {}

  explicit DescribeDeployedApiResponseBodyRequestHeadersRequestParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiParameterName) {
      res["ApiParameterName"] = boost::any(*apiParameterName);
    }
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (demoValue) {
      res["DemoValue"] = boost::any(*demoValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (docOrder) {
      res["DocOrder"] = boost::any(*docOrder);
    }
    if (docShow) {
      res["DocShow"] = boost::any(*docShow);
    }
    if (enumValue) {
      res["EnumValue"] = boost::any(*enumValue);
    }
    if (jsonScheme) {
      res["JsonScheme"] = boost::any(*jsonScheme);
    }
    if (maxLength) {
      res["MaxLength"] = boost::any(*maxLength);
    }
    if (maxValue) {
      res["MaxValue"] = boost::any(*maxValue);
    }
    if (minLength) {
      res["MinLength"] = boost::any(*minLength);
    }
    if (minValue) {
      res["MinValue"] = boost::any(*minValue);
    }
    if (parameterType) {
      res["ParameterType"] = boost::any(*parameterType);
    }
    if (regularExpression) {
      res["RegularExpression"] = boost::any(*regularExpression);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    if (serviceParameterName) {
      res["ServiceParameterName"] = boost::any(*serviceParameterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiParameterName") != m.end() && !m["ApiParameterName"].empty()) {
      apiParameterName = make_shared<string>(boost::any_cast<string>(m["ApiParameterName"]));
    }
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("DemoValue") != m.end() && !m["DemoValue"].empty()) {
      demoValue = make_shared<string>(boost::any_cast<string>(m["DemoValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DocOrder") != m.end() && !m["DocOrder"].empty()) {
      docOrder = make_shared<string>(boost::any_cast<string>(m["DocOrder"]));
    }
    if (m.find("DocShow") != m.end() && !m["DocShow"].empty()) {
      docShow = make_shared<string>(boost::any_cast<string>(m["DocShow"]));
    }
    if (m.find("EnumValue") != m.end() && !m["EnumValue"].empty()) {
      enumValue = make_shared<string>(boost::any_cast<string>(m["EnumValue"]));
    }
    if (m.find("JsonScheme") != m.end() && !m["JsonScheme"].empty()) {
      jsonScheme = make_shared<string>(boost::any_cast<string>(m["JsonScheme"]));
    }
    if (m.find("MaxLength") != m.end() && !m["MaxLength"].empty()) {
      maxLength = make_shared<long>(boost::any_cast<long>(m["MaxLength"]));
    }
    if (m.find("MaxValue") != m.end() && !m["MaxValue"].empty()) {
      maxValue = make_shared<long>(boost::any_cast<long>(m["MaxValue"]));
    }
    if (m.find("MinLength") != m.end() && !m["MinLength"].empty()) {
      minLength = make_shared<long>(boost::any_cast<long>(m["MinLength"]));
    }
    if (m.find("MinValue") != m.end() && !m["MinValue"].empty()) {
      minValue = make_shared<long>(boost::any_cast<long>(m["MinValue"]));
    }
    if (m.find("ParameterType") != m.end() && !m["ParameterType"].empty()) {
      parameterType = make_shared<string>(boost::any_cast<string>(m["ParameterType"]));
    }
    if (m.find("RegularExpression") != m.end() && !m["RegularExpression"].empty()) {
      regularExpression = make_shared<string>(boost::any_cast<string>(m["RegularExpression"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<string>(boost::any_cast<string>(m["Required"]));
    }
    if (m.find("ServiceParameterName") != m.end() && !m["ServiceParameterName"].empty()) {
      serviceParameterName = make_shared<string>(boost::any_cast<string>(m["ServiceParameterName"]));
    }
  }


  virtual ~DescribeDeployedApiResponseBodyRequestHeadersRequestParam() = default;
};
class DescribeDeployedApiResponseBodyRequestHeaders : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDeployedApiResponseBodyRequestHeadersRequestParam>> requestParam{};

  DescribeDeployedApiResponseBodyRequestHeaders() {}

  explicit DescribeDeployedApiResponseBodyRequestHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestParam) {
      vector<boost::any> temp1;
      for(auto item1:*requestParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RequestParam"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestParam") != m.end() && !m["RequestParam"].empty()) {
      if (typeid(vector<boost::any>) == m["RequestParam"].type()) {
        vector<DescribeDeployedApiResponseBodyRequestHeadersRequestParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RequestParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDeployedApiResponseBodyRequestHeadersRequestParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        requestParam = make_shared<vector<DescribeDeployedApiResponseBodyRequestHeadersRequestParam>>(expect1);
      }
    }
  }


  virtual ~DescribeDeployedApiResponseBodyRequestHeaders() = default;
};
class DescribeDeployedApiResponseBodyRequestQueriesRequestParam : public Darabonba::Model {
public:
  shared_ptr<string> apiParameterName{};
  shared_ptr<string> defaultValue{};
  shared_ptr<string> demoValue{};
  shared_ptr<string> description{};
  shared_ptr<string> docOrder{};
  shared_ptr<string> docShow{};
  shared_ptr<string> enumValue{};
  shared_ptr<string> jsonScheme{};
  shared_ptr<long> maxLength{};
  shared_ptr<long> maxValue{};
  shared_ptr<long> minLength{};
  shared_ptr<long> minValue{};
  shared_ptr<string> parameterType{};
  shared_ptr<string> regularExpression{};
  shared_ptr<string> required{};
  shared_ptr<string> serviceParameterName{};

  DescribeDeployedApiResponseBodyRequestQueriesRequestParam() {}

  explicit DescribeDeployedApiResponseBodyRequestQueriesRequestParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiParameterName) {
      res["ApiParameterName"] = boost::any(*apiParameterName);
    }
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (demoValue) {
      res["DemoValue"] = boost::any(*demoValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (docOrder) {
      res["DocOrder"] = boost::any(*docOrder);
    }
    if (docShow) {
      res["DocShow"] = boost::any(*docShow);
    }
    if (enumValue) {
      res["EnumValue"] = boost::any(*enumValue);
    }
    if (jsonScheme) {
      res["JsonScheme"] = boost::any(*jsonScheme);
    }
    if (maxLength) {
      res["MaxLength"] = boost::any(*maxLength);
    }
    if (maxValue) {
      res["MaxValue"] = boost::any(*maxValue);
    }
    if (minLength) {
      res["MinLength"] = boost::any(*minLength);
    }
    if (minValue) {
      res["MinValue"] = boost::any(*minValue);
    }
    if (parameterType) {
      res["ParameterType"] = boost::any(*parameterType);
    }
    if (regularExpression) {
      res["RegularExpression"] = boost::any(*regularExpression);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    if (serviceParameterName) {
      res["ServiceParameterName"] = boost::any(*serviceParameterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiParameterName") != m.end() && !m["ApiParameterName"].empty()) {
      apiParameterName = make_shared<string>(boost::any_cast<string>(m["ApiParameterName"]));
    }
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("DemoValue") != m.end() && !m["DemoValue"].empty()) {
      demoValue = make_shared<string>(boost::any_cast<string>(m["DemoValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DocOrder") != m.end() && !m["DocOrder"].empty()) {
      docOrder = make_shared<string>(boost::any_cast<string>(m["DocOrder"]));
    }
    if (m.find("DocShow") != m.end() && !m["DocShow"].empty()) {
      docShow = make_shared<string>(boost::any_cast<string>(m["DocShow"]));
    }
    if (m.find("EnumValue") != m.end() && !m["EnumValue"].empty()) {
      enumValue = make_shared<string>(boost::any_cast<string>(m["EnumValue"]));
    }
    if (m.find("JsonScheme") != m.end() && !m["JsonScheme"].empty()) {
      jsonScheme = make_shared<string>(boost::any_cast<string>(m["JsonScheme"]));
    }
    if (m.find("MaxLength") != m.end() && !m["MaxLength"].empty()) {
      maxLength = make_shared<long>(boost::any_cast<long>(m["MaxLength"]));
    }
    if (m.find("MaxValue") != m.end() && !m["MaxValue"].empty()) {
      maxValue = make_shared<long>(boost::any_cast<long>(m["MaxValue"]));
    }
    if (m.find("MinLength") != m.end() && !m["MinLength"].empty()) {
      minLength = make_shared<long>(boost::any_cast<long>(m["MinLength"]));
    }
    if (m.find("MinValue") != m.end() && !m["MinValue"].empty()) {
      minValue = make_shared<long>(boost::any_cast<long>(m["MinValue"]));
    }
    if (m.find("ParameterType") != m.end() && !m["ParameterType"].empty()) {
      parameterType = make_shared<string>(boost::any_cast<string>(m["ParameterType"]));
    }
    if (m.find("RegularExpression") != m.end() && !m["RegularExpression"].empty()) {
      regularExpression = make_shared<string>(boost::any_cast<string>(m["RegularExpression"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<string>(boost::any_cast<string>(m["Required"]));
    }
    if (m.find("ServiceParameterName") != m.end() && !m["ServiceParameterName"].empty()) {
      serviceParameterName = make_shared<string>(boost::any_cast<string>(m["ServiceParameterName"]));
    }
  }


  virtual ~DescribeDeployedApiResponseBodyRequestQueriesRequestParam() = default;
};
class DescribeDeployedApiResponseBodyRequestQueries : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDeployedApiResponseBodyRequestQueriesRequestParam>> requestParam{};

  DescribeDeployedApiResponseBodyRequestQueries() {}

  explicit DescribeDeployedApiResponseBodyRequestQueries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestParam) {
      vector<boost::any> temp1;
      for(auto item1:*requestParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RequestParam"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestParam") != m.end() && !m["RequestParam"].empty()) {
      if (typeid(vector<boost::any>) == m["RequestParam"].type()) {
        vector<DescribeDeployedApiResponseBodyRequestQueriesRequestParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RequestParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDeployedApiResponseBodyRequestQueriesRequestParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        requestParam = make_shared<vector<DescribeDeployedApiResponseBodyRequestQueriesRequestParam>>(expect1);
      }
    }
  }


  virtual ~DescribeDeployedApiResponseBodyRequestQueries() = default;
};
class DescribeDeployedApiResponseBodySystemParametersSystemParameter : public Darabonba::Model {
public:
  shared_ptr<string> demoValue{};
  shared_ptr<string> description{};
  shared_ptr<string> location{};
  shared_ptr<string> parameterName{};
  shared_ptr<string> serviceParameterName{};

  DescribeDeployedApiResponseBodySystemParametersSystemParameter() {}

  explicit DescribeDeployedApiResponseBodySystemParametersSystemParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (demoValue) {
      res["DemoValue"] = boost::any(*demoValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (parameterName) {
      res["ParameterName"] = boost::any(*parameterName);
    }
    if (serviceParameterName) {
      res["ServiceParameterName"] = boost::any(*serviceParameterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DemoValue") != m.end() && !m["DemoValue"].empty()) {
      demoValue = make_shared<string>(boost::any_cast<string>(m["DemoValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("ParameterName") != m.end() && !m["ParameterName"].empty()) {
      parameterName = make_shared<string>(boost::any_cast<string>(m["ParameterName"]));
    }
    if (m.find("ServiceParameterName") != m.end() && !m["ServiceParameterName"].empty()) {
      serviceParameterName = make_shared<string>(boost::any_cast<string>(m["ServiceParameterName"]));
    }
  }


  virtual ~DescribeDeployedApiResponseBodySystemParametersSystemParameter() = default;
};
class DescribeDeployedApiResponseBodySystemParameters : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDeployedApiResponseBodySystemParametersSystemParameter>> systemParameter{};

  DescribeDeployedApiResponseBodySystemParameters() {}

  explicit DescribeDeployedApiResponseBodySystemParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (systemParameter) {
      vector<boost::any> temp1;
      for(auto item1:*systemParameter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SystemParameter"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SystemParameter") != m.end() && !m["SystemParameter"].empty()) {
      if (typeid(vector<boost::any>) == m["SystemParameter"].type()) {
        vector<DescribeDeployedApiResponseBodySystemParametersSystemParameter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SystemParameter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDeployedApiResponseBodySystemParametersSystemParameter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        systemParameter = make_shared<vector<DescribeDeployedApiResponseBodySystemParametersSystemParameter>>(expect1);
      }
    }
  }


  virtual ~DescribeDeployedApiResponseBodySystemParameters() = default;
};
class DescribeDeployedApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> apiName{};
  shared_ptr<string> authType{};
  shared_ptr<string> bodyFormat{};
  shared_ptr<DescribeDeployedApiResponseBodyConstantParameters> constantParameters{};
  shared_ptr<string> deployedTime{};
  shared_ptr<DescribeDeployedApiResponseBodyErrorCodeSamples> errorCodeSamples{};
  shared_ptr<DescribeDeployedApiResponseBodyFunctionComputeConfig> functionComputeConfig{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> httpMethod{};
  shared_ptr<string> httpProtocol{};
  shared_ptr<string> path{};
  shared_ptr<DescribeDeployedApiResponseBodyPathParameters> pathParameters{};
  shared_ptr<string> postBodyDescription{};
  shared_ptr<string> postBodyType{};
  shared_ptr<string> regionId{};
  shared_ptr<DescribeDeployedApiResponseBodyRequestBody> requestBody{};
  shared_ptr<DescribeDeployedApiResponseBodyRequestHeaders> requestHeaders{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeDeployedApiResponseBodyRequestQueries> requestQueries{};
  shared_ptr<string> resultSample{};
  shared_ptr<string> resultType{};
  shared_ptr<string> serviceAddress{};
  shared_ptr<string> serviceFCEnable{};
  shared_ptr<string> serviceProtocol{};
  shared_ptr<long> serviceTimeout{};
  shared_ptr<string> serviceVpcEnable{};
  shared_ptr<string> stageName{};
  shared_ptr<DescribeDeployedApiResponseBodySystemParameters> systemParameters{};
  shared_ptr<string> visibility{};
  shared_ptr<string> vpcName{};

  DescribeDeployedApiResponseBody() {}

  explicit DescribeDeployedApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (authType) {
      res["AuthType"] = boost::any(*authType);
    }
    if (bodyFormat) {
      res["BodyFormat"] = boost::any(*bodyFormat);
    }
    if (constantParameters) {
      res["ConstantParameters"] = constantParameters ? boost::any(constantParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deployedTime) {
      res["DeployedTime"] = boost::any(*deployedTime);
    }
    if (errorCodeSamples) {
      res["ErrorCodeSamples"] = errorCodeSamples ? boost::any(errorCodeSamples->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (functionComputeConfig) {
      res["FunctionComputeConfig"] = functionComputeConfig ? boost::any(functionComputeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (httpMethod) {
      res["HttpMethod"] = boost::any(*httpMethod);
    }
    if (httpProtocol) {
      res["HttpProtocol"] = boost::any(*httpProtocol);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (pathParameters) {
      res["PathParameters"] = pathParameters ? boost::any(pathParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (postBodyDescription) {
      res["PostBodyDescription"] = boost::any(*postBodyDescription);
    }
    if (postBodyType) {
      res["PostBodyType"] = boost::any(*postBodyType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestBody) {
      res["RequestBody"] = requestBody ? boost::any(requestBody->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestHeaders) {
      res["RequestHeaders"] = requestHeaders ? boost::any(requestHeaders->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (requestQueries) {
      res["RequestQueries"] = requestQueries ? boost::any(requestQueries->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resultSample) {
      res["ResultSample"] = boost::any(*resultSample);
    }
    if (resultType) {
      res["ResultType"] = boost::any(*resultType);
    }
    if (serviceAddress) {
      res["ServiceAddress"] = boost::any(*serviceAddress);
    }
    if (serviceFCEnable) {
      res["ServiceFCEnable"] = boost::any(*serviceFCEnable);
    }
    if (serviceProtocol) {
      res["ServiceProtocol"] = boost::any(*serviceProtocol);
    }
    if (serviceTimeout) {
      res["ServiceTimeout"] = boost::any(*serviceTimeout);
    }
    if (serviceVpcEnable) {
      res["ServiceVpcEnable"] = boost::any(*serviceVpcEnable);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    if (systemParameters) {
      res["SystemParameters"] = systemParameters ? boost::any(systemParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    if (vpcName) {
      res["VpcName"] = boost::any(*vpcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("AuthType") != m.end() && !m["AuthType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["AuthType"]));
    }
    if (m.find("BodyFormat") != m.end() && !m["BodyFormat"].empty()) {
      bodyFormat = make_shared<string>(boost::any_cast<string>(m["BodyFormat"]));
    }
    if (m.find("ConstantParameters") != m.end() && !m["ConstantParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConstantParameters"].type()) {
        DescribeDeployedApiResponseBodyConstantParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConstantParameters"]));
        constantParameters = make_shared<DescribeDeployedApiResponseBodyConstantParameters>(model1);
      }
    }
    if (m.find("DeployedTime") != m.end() && !m["DeployedTime"].empty()) {
      deployedTime = make_shared<string>(boost::any_cast<string>(m["DeployedTime"]));
    }
    if (m.find("ErrorCodeSamples") != m.end() && !m["ErrorCodeSamples"].empty()) {
      if (typeid(map<string, boost::any>) == m["ErrorCodeSamples"].type()) {
        DescribeDeployedApiResponseBodyErrorCodeSamples model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ErrorCodeSamples"]));
        errorCodeSamples = make_shared<DescribeDeployedApiResponseBodyErrorCodeSamples>(model1);
      }
    }
    if (m.find("FunctionComputeConfig") != m.end() && !m["FunctionComputeConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["FunctionComputeConfig"].type()) {
        DescribeDeployedApiResponseBodyFunctionComputeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FunctionComputeConfig"]));
        functionComputeConfig = make_shared<DescribeDeployedApiResponseBodyFunctionComputeConfig>(model1);
      }
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("HttpMethod") != m.end() && !m["HttpMethod"].empty()) {
      httpMethod = make_shared<string>(boost::any_cast<string>(m["HttpMethod"]));
    }
    if (m.find("HttpProtocol") != m.end() && !m["HttpProtocol"].empty()) {
      httpProtocol = make_shared<string>(boost::any_cast<string>(m["HttpProtocol"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("PathParameters") != m.end() && !m["PathParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["PathParameters"].type()) {
        DescribeDeployedApiResponseBodyPathParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PathParameters"]));
        pathParameters = make_shared<DescribeDeployedApiResponseBodyPathParameters>(model1);
      }
    }
    if (m.find("PostBodyDescription") != m.end() && !m["PostBodyDescription"].empty()) {
      postBodyDescription = make_shared<string>(boost::any_cast<string>(m["PostBodyDescription"]));
    }
    if (m.find("PostBodyType") != m.end() && !m["PostBodyType"].empty()) {
      postBodyType = make_shared<string>(boost::any_cast<string>(m["PostBodyType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestBody") != m.end() && !m["RequestBody"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestBody"].type()) {
        DescribeDeployedApiResponseBodyRequestBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestBody"]));
        requestBody = make_shared<DescribeDeployedApiResponseBodyRequestBody>(model1);
      }
    }
    if (m.find("RequestHeaders") != m.end() && !m["RequestHeaders"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestHeaders"].type()) {
        DescribeDeployedApiResponseBodyRequestHeaders model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestHeaders"]));
        requestHeaders = make_shared<DescribeDeployedApiResponseBodyRequestHeaders>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RequestQueries") != m.end() && !m["RequestQueries"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestQueries"].type()) {
        DescribeDeployedApiResponseBodyRequestQueries model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestQueries"]));
        requestQueries = make_shared<DescribeDeployedApiResponseBodyRequestQueries>(model1);
      }
    }
    if (m.find("ResultSample") != m.end() && !m["ResultSample"].empty()) {
      resultSample = make_shared<string>(boost::any_cast<string>(m["ResultSample"]));
    }
    if (m.find("ResultType") != m.end() && !m["ResultType"].empty()) {
      resultType = make_shared<string>(boost::any_cast<string>(m["ResultType"]));
    }
    if (m.find("ServiceAddress") != m.end() && !m["ServiceAddress"].empty()) {
      serviceAddress = make_shared<string>(boost::any_cast<string>(m["ServiceAddress"]));
    }
    if (m.find("ServiceFCEnable") != m.end() && !m["ServiceFCEnable"].empty()) {
      serviceFCEnable = make_shared<string>(boost::any_cast<string>(m["ServiceFCEnable"]));
    }
    if (m.find("ServiceProtocol") != m.end() && !m["ServiceProtocol"].empty()) {
      serviceProtocol = make_shared<string>(boost::any_cast<string>(m["ServiceProtocol"]));
    }
    if (m.find("ServiceTimeout") != m.end() && !m["ServiceTimeout"].empty()) {
      serviceTimeout = make_shared<long>(boost::any_cast<long>(m["ServiceTimeout"]));
    }
    if (m.find("ServiceVpcEnable") != m.end() && !m["ServiceVpcEnable"].empty()) {
      serviceVpcEnable = make_shared<string>(boost::any_cast<string>(m["ServiceVpcEnable"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
    if (m.find("SystemParameters") != m.end() && !m["SystemParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SystemParameters"].type()) {
        DescribeDeployedApiResponseBodySystemParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SystemParameters"]));
        systemParameters = make_shared<DescribeDeployedApiResponseBodySystemParameters>(model1);
      }
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
    if (m.find("VpcName") != m.end() && !m["VpcName"].empty()) {
      vpcName = make_shared<string>(boost::any_cast<string>(m["VpcName"]));
    }
  }


  virtual ~DescribeDeployedApiResponseBody() = default;
};
class DescribeDeployedApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDeployedApiResponseBody> body{};

  DescribeDeployedApiResponse() {}

  explicit DescribeDeployedApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDeployedApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDeployedApiResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDeployedApiResponse() = default;
};
class DescribeDeployedApisRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> apiName{};
  shared_ptr<string> groupId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> stageName{};

  DescribeDeployedApisRequest() {}

  explicit DescribeDeployedApisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~DescribeDeployedApisRequest() = default;
};
class DescribeDeployedApisResponseBodyApiInfosApiInfo : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> apiName{};
  shared_ptr<string> deployedTime{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stageName{};
  shared_ptr<string> visibility{};

  DescribeDeployedApisResponseBodyApiInfosApiInfo() {}

  explicit DescribeDeployedApisResponseBodyApiInfosApiInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (deployedTime) {
      res["DeployedTime"] = boost::any(*deployedTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("DeployedTime") != m.end() && !m["DeployedTime"].empty()) {
      deployedTime = make_shared<string>(boost::any_cast<string>(m["DeployedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~DescribeDeployedApisResponseBodyApiInfosApiInfo() = default;
};
class DescribeDeployedApisResponseBodyApiInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDeployedApisResponseBodyApiInfosApiInfo>> apiInfo{};

  DescribeDeployedApisResponseBodyApiInfos() {}

  explicit DescribeDeployedApisResponseBodyApiInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiInfo) {
      vector<boost::any> temp1;
      for(auto item1:*apiInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApiInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiInfo") != m.end() && !m["ApiInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ApiInfo"].type()) {
        vector<DescribeDeployedApisResponseBodyApiInfosApiInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApiInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDeployedApisResponseBodyApiInfosApiInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apiInfo = make_shared<vector<DescribeDeployedApisResponseBodyApiInfosApiInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeDeployedApisResponseBodyApiInfos() = default;
};
class DescribeDeployedApisResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDeployedApisResponseBodyApiInfos> apiInfos{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeDeployedApisResponseBody() {}

  explicit DescribeDeployedApisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiInfos) {
      res["ApiInfos"] = apiInfos ? boost::any(apiInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiInfos") != m.end() && !m["ApiInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApiInfos"].type()) {
        DescribeDeployedApisResponseBodyApiInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApiInfos"]));
        apiInfos = make_shared<DescribeDeployedApisResponseBodyApiInfos>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeDeployedApisResponseBody() = default;
};
class DescribeDeployedApisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDeployedApisResponseBody> body{};

  DescribeDeployedApisResponse() {}

  explicit DescribeDeployedApisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDeployedApisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDeployedApisResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDeployedApisResponse() = default;
};
class DescribeDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> groupId{};

  DescribeDomainRequest() {}

  explicit DescribeDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
  }


  virtual ~DescribeDomainRequest() = default;
};
class DescribeDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> certificateBody{};
  shared_ptr<string> certificateId{};
  shared_ptr<string> certificateName{};
  shared_ptr<string> domainName{};
  shared_ptr<string> domainNameResolution{};
  shared_ptr<string> domainStatus{};
  shared_ptr<string> groupId{};
  shared_ptr<string> privateKey{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subDomain{};

  DescribeDomainResponseBody() {}

  explicit DescribeDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateBody) {
      res["CertificateBody"] = boost::any(*certificateBody);
    }
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (certificateName) {
      res["CertificateName"] = boost::any(*certificateName);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainNameResolution) {
      res["DomainNameResolution"] = boost::any(*domainNameResolution);
    }
    if (domainStatus) {
      res["DomainStatus"] = boost::any(*domainStatus);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (privateKey) {
      res["PrivateKey"] = boost::any(*privateKey);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subDomain) {
      res["SubDomain"] = boost::any(*subDomain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateBody") != m.end() && !m["CertificateBody"].empty()) {
      certificateBody = make_shared<string>(boost::any_cast<string>(m["CertificateBody"]));
    }
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("CertificateName") != m.end() && !m["CertificateName"].empty()) {
      certificateName = make_shared<string>(boost::any_cast<string>(m["CertificateName"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DomainNameResolution") != m.end() && !m["DomainNameResolution"].empty()) {
      domainNameResolution = make_shared<string>(boost::any_cast<string>(m["DomainNameResolution"]));
    }
    if (m.find("DomainStatus") != m.end() && !m["DomainStatus"].empty()) {
      domainStatus = make_shared<string>(boost::any_cast<string>(m["DomainStatus"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("PrivateKey") != m.end() && !m["PrivateKey"].empty()) {
      privateKey = make_shared<string>(boost::any_cast<string>(m["PrivateKey"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubDomain") != m.end() && !m["SubDomain"].empty()) {
      subDomain = make_shared<string>(boost::any_cast<string>(m["SubDomain"]));
    }
  }


  virtual ~DescribeDomainResponseBody() = default;
};
class DescribeDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainResponseBody> body{};

  DescribeDomainResponse() {}

  explicit DescribeDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainResponse() = default;
};
class DescribeDomainResolutionRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainNames{};
  shared_ptr<string> groupId{};

  DescribeDomainResolutionRequest() {}

  explicit DescribeDomainResolutionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainNames) {
      res["DomainNames"] = boost::any(*domainNames);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainNames") != m.end() && !m["DomainNames"].empty()) {
      domainNames = make_shared<string>(boost::any_cast<string>(m["DomainNames"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
  }


  virtual ~DescribeDomainResolutionRequest() = default;
};
class DescribeDomainResolutionResponseBodyDomainResolutionsDomainResolution : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> domainNameResolution{};

  DescribeDomainResolutionResponseBodyDomainResolutionsDomainResolution() {}

  explicit DescribeDomainResolutionResponseBodyDomainResolutionsDomainResolution(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainNameResolution) {
      res["DomainNameResolution"] = boost::any(*domainNameResolution);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DomainNameResolution") != m.end() && !m["DomainNameResolution"].empty()) {
      domainNameResolution = make_shared<string>(boost::any_cast<string>(m["DomainNameResolution"]));
    }
  }


  virtual ~DescribeDomainResolutionResponseBodyDomainResolutionsDomainResolution() = default;
};
class DescribeDomainResolutionResponseBodyDomainResolutions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDomainResolutionResponseBodyDomainResolutionsDomainResolution>> domainResolution{};

  DescribeDomainResolutionResponseBodyDomainResolutions() {}

  explicit DescribeDomainResolutionResponseBodyDomainResolutions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainResolution) {
      vector<boost::any> temp1;
      for(auto item1:*domainResolution){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DomainResolution"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainResolution") != m.end() && !m["DomainResolution"].empty()) {
      if (typeid(vector<boost::any>) == m["DomainResolution"].type()) {
        vector<DescribeDomainResolutionResponseBodyDomainResolutionsDomainResolution> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DomainResolution"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDomainResolutionResponseBodyDomainResolutionsDomainResolution model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domainResolution = make_shared<vector<DescribeDomainResolutionResponseBodyDomainResolutionsDomainResolution>>(expect1);
      }
    }
  }


  virtual ~DescribeDomainResolutionResponseBodyDomainResolutions() = default;
};
class DescribeDomainResolutionResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeDomainResolutionResponseBodyDomainResolutions> domainResolutions{};
  shared_ptr<string> groupId{};
  shared_ptr<string> requestId{};

  DescribeDomainResolutionResponseBody() {}

  explicit DescribeDomainResolutionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainResolutions) {
      res["DomainResolutions"] = domainResolutions ? boost::any(domainResolutions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainResolutions") != m.end() && !m["DomainResolutions"].empty()) {
      if (typeid(map<string, boost::any>) == m["DomainResolutions"].type()) {
        DescribeDomainResolutionResponseBodyDomainResolutions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DomainResolutions"]));
        domainResolutions = make_shared<DescribeDomainResolutionResponseBodyDomainResolutions>(model1);
      }
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeDomainResolutionResponseBody() = default;
};
class DescribeDomainResolutionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDomainResolutionResponseBody> body{};

  DescribeDomainResolutionResponse() {}

  explicit DescribeDomainResolutionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeDomainResolutionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDomainResolutionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDomainResolutionResponse() = default;
};
class DescribeHistoryApiRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> groupId{};
  shared_ptr<string> historyVersion{};
  shared_ptr<string> stageName{};

  DescribeHistoryApiRequest() {}

  explicit DescribeHistoryApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (historyVersion) {
      res["HistoryVersion"] = boost::any(*historyVersion);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("HistoryVersion") != m.end() && !m["HistoryVersion"].empty()) {
      historyVersion = make_shared<string>(boost::any_cast<string>(m["HistoryVersion"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~DescribeHistoryApiRequest() = default;
};
class DescribeHistoryApiResponseBodyConstantParametersConstantParameter : public Darabonba::Model {
public:
  shared_ptr<string> constantValue{};
  shared_ptr<string> description{};
  shared_ptr<string> location{};
  shared_ptr<string> serviceParameterName{};

  DescribeHistoryApiResponseBodyConstantParametersConstantParameter() {}

  explicit DescribeHistoryApiResponseBodyConstantParametersConstantParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (constantValue) {
      res["ConstantValue"] = boost::any(*constantValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (serviceParameterName) {
      res["ServiceParameterName"] = boost::any(*serviceParameterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConstantValue") != m.end() && !m["ConstantValue"].empty()) {
      constantValue = make_shared<string>(boost::any_cast<string>(m["ConstantValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("ServiceParameterName") != m.end() && !m["ServiceParameterName"].empty()) {
      serviceParameterName = make_shared<string>(boost::any_cast<string>(m["ServiceParameterName"]));
    }
  }


  virtual ~DescribeHistoryApiResponseBodyConstantParametersConstantParameter() = default;
};
class DescribeHistoryApiResponseBodyConstantParameters : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeHistoryApiResponseBodyConstantParametersConstantParameter>> constantParameter{};

  DescribeHistoryApiResponseBodyConstantParameters() {}

  explicit DescribeHistoryApiResponseBodyConstantParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (constantParameter) {
      vector<boost::any> temp1;
      for(auto item1:*constantParameter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConstantParameter"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConstantParameter") != m.end() && !m["ConstantParameter"].empty()) {
      if (typeid(vector<boost::any>) == m["ConstantParameter"].type()) {
        vector<DescribeHistoryApiResponseBodyConstantParametersConstantParameter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConstantParameter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHistoryApiResponseBodyConstantParametersConstantParameter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        constantParameter = make_shared<vector<DescribeHistoryApiResponseBodyConstantParametersConstantParameter>>(expect1);
      }
    }
  }


  virtual ~DescribeHistoryApiResponseBodyConstantParameters() = default;
};
class DescribeHistoryApiResponseBodyErrorCodeSamplesErrorCodeSample : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> description{};
  shared_ptr<string> message{};

  DescribeHistoryApiResponseBodyErrorCodeSamplesErrorCodeSample() {}

  explicit DescribeHistoryApiResponseBodyErrorCodeSamplesErrorCodeSample(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~DescribeHistoryApiResponseBodyErrorCodeSamplesErrorCodeSample() = default;
};
class DescribeHistoryApiResponseBodyErrorCodeSamples : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeHistoryApiResponseBodyErrorCodeSamplesErrorCodeSample>> errorCodeSample{};

  DescribeHistoryApiResponseBodyErrorCodeSamples() {}

  explicit DescribeHistoryApiResponseBodyErrorCodeSamples(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCodeSample) {
      vector<boost::any> temp1;
      for(auto item1:*errorCodeSample){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ErrorCodeSample"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCodeSample") != m.end() && !m["ErrorCodeSample"].empty()) {
      if (typeid(vector<boost::any>) == m["ErrorCodeSample"].type()) {
        vector<DescribeHistoryApiResponseBodyErrorCodeSamplesErrorCodeSample> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ErrorCodeSample"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHistoryApiResponseBodyErrorCodeSamplesErrorCodeSample model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        errorCodeSample = make_shared<vector<DescribeHistoryApiResponseBodyErrorCodeSamplesErrorCodeSample>>(expect1);
      }
    }
  }


  virtual ~DescribeHistoryApiResponseBodyErrorCodeSamples() = default;
};
class DescribeHistoryApiResponseBodyFunctionComputeConfig : public Darabonba::Model {
public:
  shared_ptr<string> fcRegionId{};
  shared_ptr<string> functionName{};
  shared_ptr<string> roleArn{};
  shared_ptr<string> serviceName{};

  DescribeHistoryApiResponseBodyFunctionComputeConfig() {}

  explicit DescribeHistoryApiResponseBodyFunctionComputeConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fcRegionId) {
      res["FcRegionId"] = boost::any(*fcRegionId);
    }
    if (functionName) {
      res["FunctionName"] = boost::any(*functionName);
    }
    if (roleArn) {
      res["RoleArn"] = boost::any(*roleArn);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FcRegionId") != m.end() && !m["FcRegionId"].empty()) {
      fcRegionId = make_shared<string>(boost::any_cast<string>(m["FcRegionId"]));
    }
    if (m.find("FunctionName") != m.end() && !m["FunctionName"].empty()) {
      functionName = make_shared<string>(boost::any_cast<string>(m["FunctionName"]));
    }
    if (m.find("RoleArn") != m.end() && !m["RoleArn"].empty()) {
      roleArn = make_shared<string>(boost::any_cast<string>(m["RoleArn"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~DescribeHistoryApiResponseBodyFunctionComputeConfig() = default;
};
class DescribeHistoryApiResponseBodyPathParametersPathParameter : public Darabonba::Model {
public:
  shared_ptr<string> apiParameterName{};
  shared_ptr<string> demoValue{};
  shared_ptr<string> description{};
  shared_ptr<string> serviceParameterName{};

  DescribeHistoryApiResponseBodyPathParametersPathParameter() {}

  explicit DescribeHistoryApiResponseBodyPathParametersPathParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiParameterName) {
      res["ApiParameterName"] = boost::any(*apiParameterName);
    }
    if (demoValue) {
      res["DemoValue"] = boost::any(*demoValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (serviceParameterName) {
      res["ServiceParameterName"] = boost::any(*serviceParameterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiParameterName") != m.end() && !m["ApiParameterName"].empty()) {
      apiParameterName = make_shared<string>(boost::any_cast<string>(m["ApiParameterName"]));
    }
    if (m.find("DemoValue") != m.end() && !m["DemoValue"].empty()) {
      demoValue = make_shared<string>(boost::any_cast<string>(m["DemoValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ServiceParameterName") != m.end() && !m["ServiceParameterName"].empty()) {
      serviceParameterName = make_shared<string>(boost::any_cast<string>(m["ServiceParameterName"]));
    }
  }


  virtual ~DescribeHistoryApiResponseBodyPathParametersPathParameter() = default;
};
class DescribeHistoryApiResponseBodyPathParameters : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeHistoryApiResponseBodyPathParametersPathParameter>> pathParameter{};

  DescribeHistoryApiResponseBodyPathParameters() {}

  explicit DescribeHistoryApiResponseBodyPathParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pathParameter) {
      vector<boost::any> temp1;
      for(auto item1:*pathParameter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PathParameter"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PathParameter") != m.end() && !m["PathParameter"].empty()) {
      if (typeid(vector<boost::any>) == m["PathParameter"].type()) {
        vector<DescribeHistoryApiResponseBodyPathParametersPathParameter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PathParameter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHistoryApiResponseBodyPathParametersPathParameter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pathParameter = make_shared<vector<DescribeHistoryApiResponseBodyPathParametersPathParameter>>(expect1);
      }
    }
  }


  virtual ~DescribeHistoryApiResponseBodyPathParameters() = default;
};
class DescribeHistoryApiResponseBodyRequestBodyRequestParam : public Darabonba::Model {
public:
  shared_ptr<string> apiParameterName{};
  shared_ptr<string> defaultValue{};
  shared_ptr<string> demoValue{};
  shared_ptr<string> description{};
  shared_ptr<string> docOrder{};
  shared_ptr<string> docShow{};
  shared_ptr<string> enumValue{};
  shared_ptr<string> jsonScheme{};
  shared_ptr<long> maxLength{};
  shared_ptr<long> maxValue{};
  shared_ptr<long> minLength{};
  shared_ptr<long> minValue{};
  shared_ptr<string> parameterType{};
  shared_ptr<string> regularExpression{};
  shared_ptr<string> required{};
  shared_ptr<string> serviceParameterName{};

  DescribeHistoryApiResponseBodyRequestBodyRequestParam() {}

  explicit DescribeHistoryApiResponseBodyRequestBodyRequestParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiParameterName) {
      res["ApiParameterName"] = boost::any(*apiParameterName);
    }
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (demoValue) {
      res["DemoValue"] = boost::any(*demoValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (docOrder) {
      res["DocOrder"] = boost::any(*docOrder);
    }
    if (docShow) {
      res["DocShow"] = boost::any(*docShow);
    }
    if (enumValue) {
      res["EnumValue"] = boost::any(*enumValue);
    }
    if (jsonScheme) {
      res["JsonScheme"] = boost::any(*jsonScheme);
    }
    if (maxLength) {
      res["MaxLength"] = boost::any(*maxLength);
    }
    if (maxValue) {
      res["MaxValue"] = boost::any(*maxValue);
    }
    if (minLength) {
      res["MinLength"] = boost::any(*minLength);
    }
    if (minValue) {
      res["MinValue"] = boost::any(*minValue);
    }
    if (parameterType) {
      res["ParameterType"] = boost::any(*parameterType);
    }
    if (regularExpression) {
      res["RegularExpression"] = boost::any(*regularExpression);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    if (serviceParameterName) {
      res["ServiceParameterName"] = boost::any(*serviceParameterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiParameterName") != m.end() && !m["ApiParameterName"].empty()) {
      apiParameterName = make_shared<string>(boost::any_cast<string>(m["ApiParameterName"]));
    }
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("DemoValue") != m.end() && !m["DemoValue"].empty()) {
      demoValue = make_shared<string>(boost::any_cast<string>(m["DemoValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DocOrder") != m.end() && !m["DocOrder"].empty()) {
      docOrder = make_shared<string>(boost::any_cast<string>(m["DocOrder"]));
    }
    if (m.find("DocShow") != m.end() && !m["DocShow"].empty()) {
      docShow = make_shared<string>(boost::any_cast<string>(m["DocShow"]));
    }
    if (m.find("EnumValue") != m.end() && !m["EnumValue"].empty()) {
      enumValue = make_shared<string>(boost::any_cast<string>(m["EnumValue"]));
    }
    if (m.find("JsonScheme") != m.end() && !m["JsonScheme"].empty()) {
      jsonScheme = make_shared<string>(boost::any_cast<string>(m["JsonScheme"]));
    }
    if (m.find("MaxLength") != m.end() && !m["MaxLength"].empty()) {
      maxLength = make_shared<long>(boost::any_cast<long>(m["MaxLength"]));
    }
    if (m.find("MaxValue") != m.end() && !m["MaxValue"].empty()) {
      maxValue = make_shared<long>(boost::any_cast<long>(m["MaxValue"]));
    }
    if (m.find("MinLength") != m.end() && !m["MinLength"].empty()) {
      minLength = make_shared<long>(boost::any_cast<long>(m["MinLength"]));
    }
    if (m.find("MinValue") != m.end() && !m["MinValue"].empty()) {
      minValue = make_shared<long>(boost::any_cast<long>(m["MinValue"]));
    }
    if (m.find("ParameterType") != m.end() && !m["ParameterType"].empty()) {
      parameterType = make_shared<string>(boost::any_cast<string>(m["ParameterType"]));
    }
    if (m.find("RegularExpression") != m.end() && !m["RegularExpression"].empty()) {
      regularExpression = make_shared<string>(boost::any_cast<string>(m["RegularExpression"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<string>(boost::any_cast<string>(m["Required"]));
    }
    if (m.find("ServiceParameterName") != m.end() && !m["ServiceParameterName"].empty()) {
      serviceParameterName = make_shared<string>(boost::any_cast<string>(m["ServiceParameterName"]));
    }
  }


  virtual ~DescribeHistoryApiResponseBodyRequestBodyRequestParam() = default;
};
class DescribeHistoryApiResponseBodyRequestBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeHistoryApiResponseBodyRequestBodyRequestParam>> requestParam{};

  DescribeHistoryApiResponseBodyRequestBody() {}

  explicit DescribeHistoryApiResponseBodyRequestBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestParam) {
      vector<boost::any> temp1;
      for(auto item1:*requestParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RequestParam"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestParam") != m.end() && !m["RequestParam"].empty()) {
      if (typeid(vector<boost::any>) == m["RequestParam"].type()) {
        vector<DescribeHistoryApiResponseBodyRequestBodyRequestParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RequestParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHistoryApiResponseBodyRequestBodyRequestParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        requestParam = make_shared<vector<DescribeHistoryApiResponseBodyRequestBodyRequestParam>>(expect1);
      }
    }
  }


  virtual ~DescribeHistoryApiResponseBodyRequestBody() = default;
};
class DescribeHistoryApiResponseBodyRequestHeadersRequestParam : public Darabonba::Model {
public:
  shared_ptr<string> apiParameterName{};
  shared_ptr<string> defaultValue{};
  shared_ptr<string> demoValue{};
  shared_ptr<string> description{};
  shared_ptr<string> docOrder{};
  shared_ptr<string> docShow{};
  shared_ptr<string> enumValue{};
  shared_ptr<string> jsonScheme{};
  shared_ptr<long> maxLength{};
  shared_ptr<long> maxValue{};
  shared_ptr<long> minLength{};
  shared_ptr<long> minValue{};
  shared_ptr<string> parameterType{};
  shared_ptr<string> regularExpression{};
  shared_ptr<string> required{};
  shared_ptr<string> serviceParameterName{};

  DescribeHistoryApiResponseBodyRequestHeadersRequestParam() {}

  explicit DescribeHistoryApiResponseBodyRequestHeadersRequestParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiParameterName) {
      res["ApiParameterName"] = boost::any(*apiParameterName);
    }
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (demoValue) {
      res["DemoValue"] = boost::any(*demoValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (docOrder) {
      res["DocOrder"] = boost::any(*docOrder);
    }
    if (docShow) {
      res["DocShow"] = boost::any(*docShow);
    }
    if (enumValue) {
      res["EnumValue"] = boost::any(*enumValue);
    }
    if (jsonScheme) {
      res["JsonScheme"] = boost::any(*jsonScheme);
    }
    if (maxLength) {
      res["MaxLength"] = boost::any(*maxLength);
    }
    if (maxValue) {
      res["MaxValue"] = boost::any(*maxValue);
    }
    if (minLength) {
      res["MinLength"] = boost::any(*minLength);
    }
    if (minValue) {
      res["MinValue"] = boost::any(*minValue);
    }
    if (parameterType) {
      res["ParameterType"] = boost::any(*parameterType);
    }
    if (regularExpression) {
      res["RegularExpression"] = boost::any(*regularExpression);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    if (serviceParameterName) {
      res["ServiceParameterName"] = boost::any(*serviceParameterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiParameterName") != m.end() && !m["ApiParameterName"].empty()) {
      apiParameterName = make_shared<string>(boost::any_cast<string>(m["ApiParameterName"]));
    }
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("DemoValue") != m.end() && !m["DemoValue"].empty()) {
      demoValue = make_shared<string>(boost::any_cast<string>(m["DemoValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DocOrder") != m.end() && !m["DocOrder"].empty()) {
      docOrder = make_shared<string>(boost::any_cast<string>(m["DocOrder"]));
    }
    if (m.find("DocShow") != m.end() && !m["DocShow"].empty()) {
      docShow = make_shared<string>(boost::any_cast<string>(m["DocShow"]));
    }
    if (m.find("EnumValue") != m.end() && !m["EnumValue"].empty()) {
      enumValue = make_shared<string>(boost::any_cast<string>(m["EnumValue"]));
    }
    if (m.find("JsonScheme") != m.end() && !m["JsonScheme"].empty()) {
      jsonScheme = make_shared<string>(boost::any_cast<string>(m["JsonScheme"]));
    }
    if (m.find("MaxLength") != m.end() && !m["MaxLength"].empty()) {
      maxLength = make_shared<long>(boost::any_cast<long>(m["MaxLength"]));
    }
    if (m.find("MaxValue") != m.end() && !m["MaxValue"].empty()) {
      maxValue = make_shared<long>(boost::any_cast<long>(m["MaxValue"]));
    }
    if (m.find("MinLength") != m.end() && !m["MinLength"].empty()) {
      minLength = make_shared<long>(boost::any_cast<long>(m["MinLength"]));
    }
    if (m.find("MinValue") != m.end() && !m["MinValue"].empty()) {
      minValue = make_shared<long>(boost::any_cast<long>(m["MinValue"]));
    }
    if (m.find("ParameterType") != m.end() && !m["ParameterType"].empty()) {
      parameterType = make_shared<string>(boost::any_cast<string>(m["ParameterType"]));
    }
    if (m.find("RegularExpression") != m.end() && !m["RegularExpression"].empty()) {
      regularExpression = make_shared<string>(boost::any_cast<string>(m["RegularExpression"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<string>(boost::any_cast<string>(m["Required"]));
    }
    if (m.find("ServiceParameterName") != m.end() && !m["ServiceParameterName"].empty()) {
      serviceParameterName = make_shared<string>(boost::any_cast<string>(m["ServiceParameterName"]));
    }
  }


  virtual ~DescribeHistoryApiResponseBodyRequestHeadersRequestParam() = default;
};
class DescribeHistoryApiResponseBodyRequestHeaders : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeHistoryApiResponseBodyRequestHeadersRequestParam>> requestParam{};

  DescribeHistoryApiResponseBodyRequestHeaders() {}

  explicit DescribeHistoryApiResponseBodyRequestHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestParam) {
      vector<boost::any> temp1;
      for(auto item1:*requestParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RequestParam"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestParam") != m.end() && !m["RequestParam"].empty()) {
      if (typeid(vector<boost::any>) == m["RequestParam"].type()) {
        vector<DescribeHistoryApiResponseBodyRequestHeadersRequestParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RequestParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHistoryApiResponseBodyRequestHeadersRequestParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        requestParam = make_shared<vector<DescribeHistoryApiResponseBodyRequestHeadersRequestParam>>(expect1);
      }
    }
  }


  virtual ~DescribeHistoryApiResponseBodyRequestHeaders() = default;
};
class DescribeHistoryApiResponseBodyRequestQueriesRequestParam : public Darabonba::Model {
public:
  shared_ptr<string> apiParameterName{};
  shared_ptr<string> defaultValue{};
  shared_ptr<string> demoValue{};
  shared_ptr<string> description{};
  shared_ptr<string> docOrder{};
  shared_ptr<string> docShow{};
  shared_ptr<string> enumValue{};
  shared_ptr<string> jsonScheme{};
  shared_ptr<long> maxLength{};
  shared_ptr<long> maxValue{};
  shared_ptr<long> minLength{};
  shared_ptr<long> minValue{};
  shared_ptr<string> parameterType{};
  shared_ptr<string> regularExpression{};
  shared_ptr<string> required{};
  shared_ptr<string> serviceParameterName{};

  DescribeHistoryApiResponseBodyRequestQueriesRequestParam() {}

  explicit DescribeHistoryApiResponseBodyRequestQueriesRequestParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiParameterName) {
      res["ApiParameterName"] = boost::any(*apiParameterName);
    }
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (demoValue) {
      res["DemoValue"] = boost::any(*demoValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (docOrder) {
      res["DocOrder"] = boost::any(*docOrder);
    }
    if (docShow) {
      res["DocShow"] = boost::any(*docShow);
    }
    if (enumValue) {
      res["EnumValue"] = boost::any(*enumValue);
    }
    if (jsonScheme) {
      res["JsonScheme"] = boost::any(*jsonScheme);
    }
    if (maxLength) {
      res["MaxLength"] = boost::any(*maxLength);
    }
    if (maxValue) {
      res["MaxValue"] = boost::any(*maxValue);
    }
    if (minLength) {
      res["MinLength"] = boost::any(*minLength);
    }
    if (minValue) {
      res["MinValue"] = boost::any(*minValue);
    }
    if (parameterType) {
      res["ParameterType"] = boost::any(*parameterType);
    }
    if (regularExpression) {
      res["RegularExpression"] = boost::any(*regularExpression);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    if (serviceParameterName) {
      res["ServiceParameterName"] = boost::any(*serviceParameterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiParameterName") != m.end() && !m["ApiParameterName"].empty()) {
      apiParameterName = make_shared<string>(boost::any_cast<string>(m["ApiParameterName"]));
    }
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("DemoValue") != m.end() && !m["DemoValue"].empty()) {
      demoValue = make_shared<string>(boost::any_cast<string>(m["DemoValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DocOrder") != m.end() && !m["DocOrder"].empty()) {
      docOrder = make_shared<string>(boost::any_cast<string>(m["DocOrder"]));
    }
    if (m.find("DocShow") != m.end() && !m["DocShow"].empty()) {
      docShow = make_shared<string>(boost::any_cast<string>(m["DocShow"]));
    }
    if (m.find("EnumValue") != m.end() && !m["EnumValue"].empty()) {
      enumValue = make_shared<string>(boost::any_cast<string>(m["EnumValue"]));
    }
    if (m.find("JsonScheme") != m.end() && !m["JsonScheme"].empty()) {
      jsonScheme = make_shared<string>(boost::any_cast<string>(m["JsonScheme"]));
    }
    if (m.find("MaxLength") != m.end() && !m["MaxLength"].empty()) {
      maxLength = make_shared<long>(boost::any_cast<long>(m["MaxLength"]));
    }
    if (m.find("MaxValue") != m.end() && !m["MaxValue"].empty()) {
      maxValue = make_shared<long>(boost::any_cast<long>(m["MaxValue"]));
    }
    if (m.find("MinLength") != m.end() && !m["MinLength"].empty()) {
      minLength = make_shared<long>(boost::any_cast<long>(m["MinLength"]));
    }
    if (m.find("MinValue") != m.end() && !m["MinValue"].empty()) {
      minValue = make_shared<long>(boost::any_cast<long>(m["MinValue"]));
    }
    if (m.find("ParameterType") != m.end() && !m["ParameterType"].empty()) {
      parameterType = make_shared<string>(boost::any_cast<string>(m["ParameterType"]));
    }
    if (m.find("RegularExpression") != m.end() && !m["RegularExpression"].empty()) {
      regularExpression = make_shared<string>(boost::any_cast<string>(m["RegularExpression"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<string>(boost::any_cast<string>(m["Required"]));
    }
    if (m.find("ServiceParameterName") != m.end() && !m["ServiceParameterName"].empty()) {
      serviceParameterName = make_shared<string>(boost::any_cast<string>(m["ServiceParameterName"]));
    }
  }


  virtual ~DescribeHistoryApiResponseBodyRequestQueriesRequestParam() = default;
};
class DescribeHistoryApiResponseBodyRequestQueries : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeHistoryApiResponseBodyRequestQueriesRequestParam>> requestParam{};

  DescribeHistoryApiResponseBodyRequestQueries() {}

  explicit DescribeHistoryApiResponseBodyRequestQueries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestParam) {
      vector<boost::any> temp1;
      for(auto item1:*requestParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RequestParam"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestParam") != m.end() && !m["RequestParam"].empty()) {
      if (typeid(vector<boost::any>) == m["RequestParam"].type()) {
        vector<DescribeHistoryApiResponseBodyRequestQueriesRequestParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RequestParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHistoryApiResponseBodyRequestQueriesRequestParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        requestParam = make_shared<vector<DescribeHistoryApiResponseBodyRequestQueriesRequestParam>>(expect1);
      }
    }
  }


  virtual ~DescribeHistoryApiResponseBodyRequestQueries() = default;
};
class DescribeHistoryApiResponseBodySystemParametersSystemParameter : public Darabonba::Model {
public:
  shared_ptr<string> demoValue{};
  shared_ptr<string> description{};
  shared_ptr<string> location{};
  shared_ptr<string> parameterName{};
  shared_ptr<string> serviceParameterName{};

  DescribeHistoryApiResponseBodySystemParametersSystemParameter() {}

  explicit DescribeHistoryApiResponseBodySystemParametersSystemParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (demoValue) {
      res["DemoValue"] = boost::any(*demoValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (parameterName) {
      res["ParameterName"] = boost::any(*parameterName);
    }
    if (serviceParameterName) {
      res["ServiceParameterName"] = boost::any(*serviceParameterName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DemoValue") != m.end() && !m["DemoValue"].empty()) {
      demoValue = make_shared<string>(boost::any_cast<string>(m["DemoValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("ParameterName") != m.end() && !m["ParameterName"].empty()) {
      parameterName = make_shared<string>(boost::any_cast<string>(m["ParameterName"]));
    }
    if (m.find("ServiceParameterName") != m.end() && !m["ServiceParameterName"].empty()) {
      serviceParameterName = make_shared<string>(boost::any_cast<string>(m["ServiceParameterName"]));
    }
  }


  virtual ~DescribeHistoryApiResponseBodySystemParametersSystemParameter() = default;
};
class DescribeHistoryApiResponseBodySystemParameters : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeHistoryApiResponseBodySystemParametersSystemParameter>> systemParameter{};

  DescribeHistoryApiResponseBodySystemParameters() {}

  explicit DescribeHistoryApiResponseBodySystemParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (systemParameter) {
      vector<boost::any> temp1;
      for(auto item1:*systemParameter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SystemParameter"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SystemParameter") != m.end() && !m["SystemParameter"].empty()) {
      if (typeid(vector<boost::any>) == m["SystemParameter"].type()) {
        vector<DescribeHistoryApiResponseBodySystemParametersSystemParameter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SystemParameter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHistoryApiResponseBodySystemParametersSystemParameter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        systemParameter = make_shared<vector<DescribeHistoryApiResponseBodySystemParametersSystemParameter>>(expect1);
      }
    }
  }


  virtual ~DescribeHistoryApiResponseBodySystemParameters() = default;
};
class DescribeHistoryApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> apiName{};
  shared_ptr<string> authType{};
  shared_ptr<string> bodyFormat{};
  shared_ptr<DescribeHistoryApiResponseBodyConstantParameters> constantParameters{};
  shared_ptr<string> deployedTime{};
  shared_ptr<string> description{};
  shared_ptr<DescribeHistoryApiResponseBodyErrorCodeSamples> errorCodeSamples{};
  shared_ptr<DescribeHistoryApiResponseBodyFunctionComputeConfig> functionComputeConfig{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> historyVersion{};
  shared_ptr<string> httpMethod{};
  shared_ptr<string> httpProtocol{};
  shared_ptr<string> mock{};
  shared_ptr<string> mockResult{};
  shared_ptr<string> originResultDescription{};
  shared_ptr<string> path{};
  shared_ptr<DescribeHistoryApiResponseBodyPathParameters> pathParameters{};
  shared_ptr<string> postBodyDescription{};
  shared_ptr<string> postBodyType{};
  shared_ptr<string> regionId{};
  shared_ptr<DescribeHistoryApiResponseBodyRequestBody> requestBody{};
  shared_ptr<DescribeHistoryApiResponseBodyRequestHeaders> requestHeaders{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeHistoryApiResponseBodyRequestQueries> requestQueries{};
  shared_ptr<string> resultSample{};
  shared_ptr<string> resultType{};
  shared_ptr<string> serviceAddress{};
  shared_ptr<string> serviceFCEnable{};
  shared_ptr<string> serviceProtocol{};
  shared_ptr<long> serviceTimeout{};
  shared_ptr<string> serviceVpcEnable{};
  shared_ptr<string> status{};
  shared_ptr<DescribeHistoryApiResponseBodySystemParameters> systemParameters{};
  shared_ptr<string> visibility{};
  shared_ptr<string> vpcName{};

  DescribeHistoryApiResponseBody() {}

  explicit DescribeHistoryApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (authType) {
      res["AuthType"] = boost::any(*authType);
    }
    if (bodyFormat) {
      res["BodyFormat"] = boost::any(*bodyFormat);
    }
    if (constantParameters) {
      res["ConstantParameters"] = constantParameters ? boost::any(constantParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (deployedTime) {
      res["DeployedTime"] = boost::any(*deployedTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (errorCodeSamples) {
      res["ErrorCodeSamples"] = errorCodeSamples ? boost::any(errorCodeSamples->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (functionComputeConfig) {
      res["FunctionComputeConfig"] = functionComputeConfig ? boost::any(functionComputeConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (historyVersion) {
      res["HistoryVersion"] = boost::any(*historyVersion);
    }
    if (httpMethod) {
      res["HttpMethod"] = boost::any(*httpMethod);
    }
    if (httpProtocol) {
      res["HttpProtocol"] = boost::any(*httpProtocol);
    }
    if (mock) {
      res["Mock"] = boost::any(*mock);
    }
    if (mockResult) {
      res["MockResult"] = boost::any(*mockResult);
    }
    if (originResultDescription) {
      res["OriginResultDescription"] = boost::any(*originResultDescription);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (pathParameters) {
      res["PathParameters"] = pathParameters ? boost::any(pathParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (postBodyDescription) {
      res["PostBodyDescription"] = boost::any(*postBodyDescription);
    }
    if (postBodyType) {
      res["PostBodyType"] = boost::any(*postBodyType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestBody) {
      res["RequestBody"] = requestBody ? boost::any(requestBody->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestHeaders) {
      res["RequestHeaders"] = requestHeaders ? boost::any(requestHeaders->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (requestQueries) {
      res["RequestQueries"] = requestQueries ? boost::any(requestQueries->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resultSample) {
      res["ResultSample"] = boost::any(*resultSample);
    }
    if (resultType) {
      res["ResultType"] = boost::any(*resultType);
    }
    if (serviceAddress) {
      res["ServiceAddress"] = boost::any(*serviceAddress);
    }
    if (serviceFCEnable) {
      res["ServiceFCEnable"] = boost::any(*serviceFCEnable);
    }
    if (serviceProtocol) {
      res["ServiceProtocol"] = boost::any(*serviceProtocol);
    }
    if (serviceTimeout) {
      res["ServiceTimeout"] = boost::any(*serviceTimeout);
    }
    if (serviceVpcEnable) {
      res["ServiceVpcEnable"] = boost::any(*serviceVpcEnable);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (systemParameters) {
      res["SystemParameters"] = systemParameters ? boost::any(systemParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    if (vpcName) {
      res["VpcName"] = boost::any(*vpcName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("AuthType") != m.end() && !m["AuthType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["AuthType"]));
    }
    if (m.find("BodyFormat") != m.end() && !m["BodyFormat"].empty()) {
      bodyFormat = make_shared<string>(boost::any_cast<string>(m["BodyFormat"]));
    }
    if (m.find("ConstantParameters") != m.end() && !m["ConstantParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["ConstantParameters"].type()) {
        DescribeHistoryApiResponseBodyConstantParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ConstantParameters"]));
        constantParameters = make_shared<DescribeHistoryApiResponseBodyConstantParameters>(model1);
      }
    }
    if (m.find("DeployedTime") != m.end() && !m["DeployedTime"].empty()) {
      deployedTime = make_shared<string>(boost::any_cast<string>(m["DeployedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ErrorCodeSamples") != m.end() && !m["ErrorCodeSamples"].empty()) {
      if (typeid(map<string, boost::any>) == m["ErrorCodeSamples"].type()) {
        DescribeHistoryApiResponseBodyErrorCodeSamples model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ErrorCodeSamples"]));
        errorCodeSamples = make_shared<DescribeHistoryApiResponseBodyErrorCodeSamples>(model1);
      }
    }
    if (m.find("FunctionComputeConfig") != m.end() && !m["FunctionComputeConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["FunctionComputeConfig"].type()) {
        DescribeHistoryApiResponseBodyFunctionComputeConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FunctionComputeConfig"]));
        functionComputeConfig = make_shared<DescribeHistoryApiResponseBodyFunctionComputeConfig>(model1);
      }
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("HistoryVersion") != m.end() && !m["HistoryVersion"].empty()) {
      historyVersion = make_shared<string>(boost::any_cast<string>(m["HistoryVersion"]));
    }
    if (m.find("HttpMethod") != m.end() && !m["HttpMethod"].empty()) {
      httpMethod = make_shared<string>(boost::any_cast<string>(m["HttpMethod"]));
    }
    if (m.find("HttpProtocol") != m.end() && !m["HttpProtocol"].empty()) {
      httpProtocol = make_shared<string>(boost::any_cast<string>(m["HttpProtocol"]));
    }
    if (m.find("Mock") != m.end() && !m["Mock"].empty()) {
      mock = make_shared<string>(boost::any_cast<string>(m["Mock"]));
    }
    if (m.find("MockResult") != m.end() && !m["MockResult"].empty()) {
      mockResult = make_shared<string>(boost::any_cast<string>(m["MockResult"]));
    }
    if (m.find("OriginResultDescription") != m.end() && !m["OriginResultDescription"].empty()) {
      originResultDescription = make_shared<string>(boost::any_cast<string>(m["OriginResultDescription"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("PathParameters") != m.end() && !m["PathParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["PathParameters"].type()) {
        DescribeHistoryApiResponseBodyPathParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PathParameters"]));
        pathParameters = make_shared<DescribeHistoryApiResponseBodyPathParameters>(model1);
      }
    }
    if (m.find("PostBodyDescription") != m.end() && !m["PostBodyDescription"].empty()) {
      postBodyDescription = make_shared<string>(boost::any_cast<string>(m["PostBodyDescription"]));
    }
    if (m.find("PostBodyType") != m.end() && !m["PostBodyType"].empty()) {
      postBodyType = make_shared<string>(boost::any_cast<string>(m["PostBodyType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestBody") != m.end() && !m["RequestBody"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestBody"].type()) {
        DescribeHistoryApiResponseBodyRequestBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestBody"]));
        requestBody = make_shared<DescribeHistoryApiResponseBodyRequestBody>(model1);
      }
    }
    if (m.find("RequestHeaders") != m.end() && !m["RequestHeaders"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestHeaders"].type()) {
        DescribeHistoryApiResponseBodyRequestHeaders model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestHeaders"]));
        requestHeaders = make_shared<DescribeHistoryApiResponseBodyRequestHeaders>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RequestQueries") != m.end() && !m["RequestQueries"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestQueries"].type()) {
        DescribeHistoryApiResponseBodyRequestQueries model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestQueries"]));
        requestQueries = make_shared<DescribeHistoryApiResponseBodyRequestQueries>(model1);
      }
    }
    if (m.find("ResultSample") != m.end() && !m["ResultSample"].empty()) {
      resultSample = make_shared<string>(boost::any_cast<string>(m["ResultSample"]));
    }
    if (m.find("ResultType") != m.end() && !m["ResultType"].empty()) {
      resultType = make_shared<string>(boost::any_cast<string>(m["ResultType"]));
    }
    if (m.find("ServiceAddress") != m.end() && !m["ServiceAddress"].empty()) {
      serviceAddress = make_shared<string>(boost::any_cast<string>(m["ServiceAddress"]));
    }
    if (m.find("ServiceFCEnable") != m.end() && !m["ServiceFCEnable"].empty()) {
      serviceFCEnable = make_shared<string>(boost::any_cast<string>(m["ServiceFCEnable"]));
    }
    if (m.find("ServiceProtocol") != m.end() && !m["ServiceProtocol"].empty()) {
      serviceProtocol = make_shared<string>(boost::any_cast<string>(m["ServiceProtocol"]));
    }
    if (m.find("ServiceTimeout") != m.end() && !m["ServiceTimeout"].empty()) {
      serviceTimeout = make_shared<long>(boost::any_cast<long>(m["ServiceTimeout"]));
    }
    if (m.find("ServiceVpcEnable") != m.end() && !m["ServiceVpcEnable"].empty()) {
      serviceVpcEnable = make_shared<string>(boost::any_cast<string>(m["ServiceVpcEnable"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SystemParameters") != m.end() && !m["SystemParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SystemParameters"].type()) {
        DescribeHistoryApiResponseBodySystemParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SystemParameters"]));
        systemParameters = make_shared<DescribeHistoryApiResponseBodySystemParameters>(model1);
      }
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
    if (m.find("VpcName") != m.end() && !m["VpcName"].empty()) {
      vpcName = make_shared<string>(boost::any_cast<string>(m["VpcName"]));
    }
  }


  virtual ~DescribeHistoryApiResponseBody() = default;
};
class DescribeHistoryApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeHistoryApiResponseBody> body{};

  DescribeHistoryApiResponse() {}

  explicit DescribeHistoryApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeHistoryApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHistoryApiResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHistoryApiResponse() = default;
};
class DescribeHistoryApisRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> apiName{};
  shared_ptr<string> groupId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> stageName{};

  DescribeHistoryApisRequest() {}

  explicit DescribeHistoryApisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~DescribeHistoryApisRequest() = default;
};
class DescribeHistoryApisResponseBodyApiInfosApiInfo : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> apiName{};
  shared_ptr<string> deployedTime{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> historyVersion{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stageName{};
  shared_ptr<string> status{};

  DescribeHistoryApisResponseBodyApiInfosApiInfo() {}

  explicit DescribeHistoryApisResponseBodyApiInfosApiInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (deployedTime) {
      res["DeployedTime"] = boost::any(*deployedTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (historyVersion) {
      res["HistoryVersion"] = boost::any(*historyVersion);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("DeployedTime") != m.end() && !m["DeployedTime"].empty()) {
      deployedTime = make_shared<string>(boost::any_cast<string>(m["DeployedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("HistoryVersion") != m.end() && !m["HistoryVersion"].empty()) {
      historyVersion = make_shared<string>(boost::any_cast<string>(m["HistoryVersion"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeHistoryApisResponseBodyApiInfosApiInfo() = default;
};
class DescribeHistoryApisResponseBodyApiInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeHistoryApisResponseBodyApiInfosApiInfo>> apiInfo{};

  DescribeHistoryApisResponseBodyApiInfos() {}

  explicit DescribeHistoryApisResponseBodyApiInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiInfo) {
      vector<boost::any> temp1;
      for(auto item1:*apiInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApiInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiInfo") != m.end() && !m["ApiInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ApiInfo"].type()) {
        vector<DescribeHistoryApisResponseBodyApiInfosApiInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApiInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeHistoryApisResponseBodyApiInfosApiInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apiInfo = make_shared<vector<DescribeHistoryApisResponseBodyApiInfosApiInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeHistoryApisResponseBodyApiInfos() = default;
};
class DescribeHistoryApisResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeHistoryApisResponseBodyApiInfos> apiInfos{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeHistoryApisResponseBody() {}

  explicit DescribeHistoryApisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiInfos) {
      res["ApiInfos"] = apiInfos ? boost::any(apiInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiInfos") != m.end() && !m["ApiInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApiInfos"].type()) {
        DescribeHistoryApisResponseBodyApiInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApiInfos"]));
        apiInfos = make_shared<DescribeHistoryApisResponseBodyApiInfos>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeHistoryApisResponseBody() = default;
};
class DescribeHistoryApisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeHistoryApisResponseBody> body{};

  DescribeHistoryApisResponse() {}

  explicit DescribeHistoryApisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeHistoryApisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeHistoryApisResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeHistoryApisResponse() = default;
};
class DescribeModelsForInnerRequest : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> groupId{};
  shared_ptr<string> modelId{};
  shared_ptr<string> modelName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeModelsForInnerRequest() {}

  explicit DescribeModelsForInnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeModelsForInnerRequest() = default;
};
class DescribeModelsForInnerResponseBodyModelDetailsModelDetail : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> modelName{};
  shared_ptr<string> modelRef{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> schema{};

  DescribeModelsForInnerResponseBodyModelDetailsModelDetail() {}

  explicit DescribeModelsForInnerResponseBodyModelDetailsModelDetail(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (modelRef) {
      res["ModelRef"] = boost::any(*modelRef);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (schema) {
      res["Schema"] = boost::any(*schema);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("ModelRef") != m.end() && !m["ModelRef"].empty()) {
      modelRef = make_shared<string>(boost::any_cast<string>(m["ModelRef"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Schema") != m.end() && !m["Schema"].empty()) {
      schema = make_shared<string>(boost::any_cast<string>(m["Schema"]));
    }
  }


  virtual ~DescribeModelsForInnerResponseBodyModelDetailsModelDetail() = default;
};
class DescribeModelsForInnerResponseBodyModelDetails : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeModelsForInnerResponseBodyModelDetailsModelDetail>> modelDetail{};

  DescribeModelsForInnerResponseBodyModelDetails() {}

  explicit DescribeModelsForInnerResponseBodyModelDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelDetail) {
      vector<boost::any> temp1;
      for(auto item1:*modelDetail){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ModelDetail"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModelDetail") != m.end() && !m["ModelDetail"].empty()) {
      if (typeid(vector<boost::any>) == m["ModelDetail"].type()) {
        vector<DescribeModelsForInnerResponseBodyModelDetailsModelDetail> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ModelDetail"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeModelsForInnerResponseBodyModelDetailsModelDetail model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        modelDetail = make_shared<vector<DescribeModelsForInnerResponseBodyModelDetailsModelDetail>>(expect1);
      }
    }
  }


  virtual ~DescribeModelsForInnerResponseBodyModelDetails() = default;
};
class DescribeModelsForInnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeModelsForInnerResponseBodyModelDetails> modelDetails{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeModelsForInnerResponseBody() {}

  explicit DescribeModelsForInnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelDetails) {
      res["ModelDetails"] = modelDetails ? boost::any(modelDetails->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModelDetails") != m.end() && !m["ModelDetails"].empty()) {
      if (typeid(map<string, boost::any>) == m["ModelDetails"].type()) {
        DescribeModelsForInnerResponseBodyModelDetails model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ModelDetails"]));
        modelDetails = make_shared<DescribeModelsForInnerResponseBodyModelDetails>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeModelsForInnerResponseBody() = default;
};
class DescribeModelsForInnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeModelsForInnerResponseBody> body{};

  DescribeModelsForInnerResponse() {}

  explicit DescribeModelsForInnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeModelsForInnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeModelsForInnerResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeModelsForInnerResponse() = default;
};
class DescribePurchasedApiRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> groupId{};

  DescribePurchasedApiRequest() {}

  explicit DescribePurchasedApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
  }


  virtual ~DescribePurchasedApiRequest() = default;
};
class DescribePurchasedApiResponseBodyPathParametersPathParameter : public Darabonba::Model {
public:
  shared_ptr<string> apiParameterName{};
  shared_ptr<string> demoValue{};
  shared_ptr<string> description{};

  DescribePurchasedApiResponseBodyPathParametersPathParameter() {}

  explicit DescribePurchasedApiResponseBodyPathParametersPathParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiParameterName) {
      res["ApiParameterName"] = boost::any(*apiParameterName);
    }
    if (demoValue) {
      res["DemoValue"] = boost::any(*demoValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiParameterName") != m.end() && !m["ApiParameterName"].empty()) {
      apiParameterName = make_shared<string>(boost::any_cast<string>(m["ApiParameterName"]));
    }
    if (m.find("DemoValue") != m.end() && !m["DemoValue"].empty()) {
      demoValue = make_shared<string>(boost::any_cast<string>(m["DemoValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~DescribePurchasedApiResponseBodyPathParametersPathParameter() = default;
};
class DescribePurchasedApiResponseBodyPathParameters : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePurchasedApiResponseBodyPathParametersPathParameter>> pathParameter{};

  DescribePurchasedApiResponseBodyPathParameters() {}

  explicit DescribePurchasedApiResponseBodyPathParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pathParameter) {
      vector<boost::any> temp1;
      for(auto item1:*pathParameter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PathParameter"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PathParameter") != m.end() && !m["PathParameter"].empty()) {
      if (typeid(vector<boost::any>) == m["PathParameter"].type()) {
        vector<DescribePurchasedApiResponseBodyPathParametersPathParameter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PathParameter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePurchasedApiResponseBodyPathParametersPathParameter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pathParameter = make_shared<vector<DescribePurchasedApiResponseBodyPathParametersPathParameter>>(expect1);
      }
    }
  }


  virtual ~DescribePurchasedApiResponseBodyPathParameters() = default;
};
class DescribePurchasedApiResponseBodyRequestBodyRequestParam : public Darabonba::Model {
public:
  shared_ptr<string> apiParameterName{};
  shared_ptr<string> defaultValue{};
  shared_ptr<string> demoValue{};
  shared_ptr<string> description{};
  shared_ptr<string> docOrder{};
  shared_ptr<string> docShow{};
  shared_ptr<string> enumValue{};
  shared_ptr<string> jsonScheme{};
  shared_ptr<long> maxLength{};
  shared_ptr<string> maxValue{};
  shared_ptr<long> minLength{};
  shared_ptr<string> minValue{};
  shared_ptr<string> parameterType{};
  shared_ptr<string> regularExpression{};
  shared_ptr<string> required{};

  DescribePurchasedApiResponseBodyRequestBodyRequestParam() {}

  explicit DescribePurchasedApiResponseBodyRequestBodyRequestParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiParameterName) {
      res["ApiParameterName"] = boost::any(*apiParameterName);
    }
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (demoValue) {
      res["DemoValue"] = boost::any(*demoValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (docOrder) {
      res["DocOrder"] = boost::any(*docOrder);
    }
    if (docShow) {
      res["DocShow"] = boost::any(*docShow);
    }
    if (enumValue) {
      res["EnumValue"] = boost::any(*enumValue);
    }
    if (jsonScheme) {
      res["JsonScheme"] = boost::any(*jsonScheme);
    }
    if (maxLength) {
      res["MaxLength"] = boost::any(*maxLength);
    }
    if (maxValue) {
      res["MaxValue"] = boost::any(*maxValue);
    }
    if (minLength) {
      res["MinLength"] = boost::any(*minLength);
    }
    if (minValue) {
      res["MinValue"] = boost::any(*minValue);
    }
    if (parameterType) {
      res["ParameterType"] = boost::any(*parameterType);
    }
    if (regularExpression) {
      res["RegularExpression"] = boost::any(*regularExpression);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiParameterName") != m.end() && !m["ApiParameterName"].empty()) {
      apiParameterName = make_shared<string>(boost::any_cast<string>(m["ApiParameterName"]));
    }
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("DemoValue") != m.end() && !m["DemoValue"].empty()) {
      demoValue = make_shared<string>(boost::any_cast<string>(m["DemoValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DocOrder") != m.end() && !m["DocOrder"].empty()) {
      docOrder = make_shared<string>(boost::any_cast<string>(m["DocOrder"]));
    }
    if (m.find("DocShow") != m.end() && !m["DocShow"].empty()) {
      docShow = make_shared<string>(boost::any_cast<string>(m["DocShow"]));
    }
    if (m.find("EnumValue") != m.end() && !m["EnumValue"].empty()) {
      enumValue = make_shared<string>(boost::any_cast<string>(m["EnumValue"]));
    }
    if (m.find("JsonScheme") != m.end() && !m["JsonScheme"].empty()) {
      jsonScheme = make_shared<string>(boost::any_cast<string>(m["JsonScheme"]));
    }
    if (m.find("MaxLength") != m.end() && !m["MaxLength"].empty()) {
      maxLength = make_shared<long>(boost::any_cast<long>(m["MaxLength"]));
    }
    if (m.find("MaxValue") != m.end() && !m["MaxValue"].empty()) {
      maxValue = make_shared<string>(boost::any_cast<string>(m["MaxValue"]));
    }
    if (m.find("MinLength") != m.end() && !m["MinLength"].empty()) {
      minLength = make_shared<long>(boost::any_cast<long>(m["MinLength"]));
    }
    if (m.find("MinValue") != m.end() && !m["MinValue"].empty()) {
      minValue = make_shared<string>(boost::any_cast<string>(m["MinValue"]));
    }
    if (m.find("ParameterType") != m.end() && !m["ParameterType"].empty()) {
      parameterType = make_shared<string>(boost::any_cast<string>(m["ParameterType"]));
    }
    if (m.find("RegularExpression") != m.end() && !m["RegularExpression"].empty()) {
      regularExpression = make_shared<string>(boost::any_cast<string>(m["RegularExpression"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<string>(boost::any_cast<string>(m["Required"]));
    }
  }


  virtual ~DescribePurchasedApiResponseBodyRequestBodyRequestParam() = default;
};
class DescribePurchasedApiResponseBodyRequestBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePurchasedApiResponseBodyRequestBodyRequestParam>> requestParam{};

  DescribePurchasedApiResponseBodyRequestBody() {}

  explicit DescribePurchasedApiResponseBodyRequestBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestParam) {
      vector<boost::any> temp1;
      for(auto item1:*requestParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RequestParam"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestParam") != m.end() && !m["RequestParam"].empty()) {
      if (typeid(vector<boost::any>) == m["RequestParam"].type()) {
        vector<DescribePurchasedApiResponseBodyRequestBodyRequestParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RequestParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePurchasedApiResponseBodyRequestBodyRequestParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        requestParam = make_shared<vector<DescribePurchasedApiResponseBodyRequestBodyRequestParam>>(expect1);
      }
    }
  }


  virtual ~DescribePurchasedApiResponseBodyRequestBody() = default;
};
class DescribePurchasedApiResponseBodyRequestHeadersRequestParam : public Darabonba::Model {
public:
  shared_ptr<string> apiParameterName{};
  shared_ptr<string> defaultValue{};
  shared_ptr<string> demoValue{};
  shared_ptr<string> description{};
  shared_ptr<string> docOrder{};
  shared_ptr<string> docShow{};
  shared_ptr<string> enumValue{};
  shared_ptr<string> jsonScheme{};
  shared_ptr<long> maxLength{};
  shared_ptr<long> maxValue{};
  shared_ptr<long> minLength{};
  shared_ptr<long> minValue{};
  shared_ptr<string> parameterType{};
  shared_ptr<string> regularExpression{};
  shared_ptr<string> required{};

  DescribePurchasedApiResponseBodyRequestHeadersRequestParam() {}

  explicit DescribePurchasedApiResponseBodyRequestHeadersRequestParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiParameterName) {
      res["ApiParameterName"] = boost::any(*apiParameterName);
    }
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (demoValue) {
      res["DemoValue"] = boost::any(*demoValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (docOrder) {
      res["DocOrder"] = boost::any(*docOrder);
    }
    if (docShow) {
      res["DocShow"] = boost::any(*docShow);
    }
    if (enumValue) {
      res["EnumValue"] = boost::any(*enumValue);
    }
    if (jsonScheme) {
      res["JsonScheme"] = boost::any(*jsonScheme);
    }
    if (maxLength) {
      res["MaxLength"] = boost::any(*maxLength);
    }
    if (maxValue) {
      res["MaxValue"] = boost::any(*maxValue);
    }
    if (minLength) {
      res["MinLength"] = boost::any(*minLength);
    }
    if (minValue) {
      res["MinValue"] = boost::any(*minValue);
    }
    if (parameterType) {
      res["ParameterType"] = boost::any(*parameterType);
    }
    if (regularExpression) {
      res["RegularExpression"] = boost::any(*regularExpression);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiParameterName") != m.end() && !m["ApiParameterName"].empty()) {
      apiParameterName = make_shared<string>(boost::any_cast<string>(m["ApiParameterName"]));
    }
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("DemoValue") != m.end() && !m["DemoValue"].empty()) {
      demoValue = make_shared<string>(boost::any_cast<string>(m["DemoValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DocOrder") != m.end() && !m["DocOrder"].empty()) {
      docOrder = make_shared<string>(boost::any_cast<string>(m["DocOrder"]));
    }
    if (m.find("DocShow") != m.end() && !m["DocShow"].empty()) {
      docShow = make_shared<string>(boost::any_cast<string>(m["DocShow"]));
    }
    if (m.find("EnumValue") != m.end() && !m["EnumValue"].empty()) {
      enumValue = make_shared<string>(boost::any_cast<string>(m["EnumValue"]));
    }
    if (m.find("JsonScheme") != m.end() && !m["JsonScheme"].empty()) {
      jsonScheme = make_shared<string>(boost::any_cast<string>(m["JsonScheme"]));
    }
    if (m.find("MaxLength") != m.end() && !m["MaxLength"].empty()) {
      maxLength = make_shared<long>(boost::any_cast<long>(m["MaxLength"]));
    }
    if (m.find("MaxValue") != m.end() && !m["MaxValue"].empty()) {
      maxValue = make_shared<long>(boost::any_cast<long>(m["MaxValue"]));
    }
    if (m.find("MinLength") != m.end() && !m["MinLength"].empty()) {
      minLength = make_shared<long>(boost::any_cast<long>(m["MinLength"]));
    }
    if (m.find("MinValue") != m.end() && !m["MinValue"].empty()) {
      minValue = make_shared<long>(boost::any_cast<long>(m["MinValue"]));
    }
    if (m.find("ParameterType") != m.end() && !m["ParameterType"].empty()) {
      parameterType = make_shared<string>(boost::any_cast<string>(m["ParameterType"]));
    }
    if (m.find("RegularExpression") != m.end() && !m["RegularExpression"].empty()) {
      regularExpression = make_shared<string>(boost::any_cast<string>(m["RegularExpression"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<string>(boost::any_cast<string>(m["Required"]));
    }
  }


  virtual ~DescribePurchasedApiResponseBodyRequestHeadersRequestParam() = default;
};
class DescribePurchasedApiResponseBodyRequestHeaders : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePurchasedApiResponseBodyRequestHeadersRequestParam>> requestParam{};

  DescribePurchasedApiResponseBodyRequestHeaders() {}

  explicit DescribePurchasedApiResponseBodyRequestHeaders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestParam) {
      vector<boost::any> temp1;
      for(auto item1:*requestParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RequestParam"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestParam") != m.end() && !m["RequestParam"].empty()) {
      if (typeid(vector<boost::any>) == m["RequestParam"].type()) {
        vector<DescribePurchasedApiResponseBodyRequestHeadersRequestParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RequestParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePurchasedApiResponseBodyRequestHeadersRequestParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        requestParam = make_shared<vector<DescribePurchasedApiResponseBodyRequestHeadersRequestParam>>(expect1);
      }
    }
  }


  virtual ~DescribePurchasedApiResponseBodyRequestHeaders() = default;
};
class DescribePurchasedApiResponseBodyRequestQueriesRequestParam : public Darabonba::Model {
public:
  shared_ptr<string> apiParameterName{};
  shared_ptr<string> defaultValue{};
  shared_ptr<string> demoValue{};
  shared_ptr<string> description{};
  shared_ptr<string> docOrder{};
  shared_ptr<string> docShow{};
  shared_ptr<string> enumValue{};
  shared_ptr<string> jsonScheme{};
  shared_ptr<long> maxLength{};
  shared_ptr<string> maxValue{};
  shared_ptr<long> minLength{};
  shared_ptr<string> minValue{};
  shared_ptr<string> parameterType{};
  shared_ptr<string> regularExpression{};
  shared_ptr<string> required{};

  DescribePurchasedApiResponseBodyRequestQueriesRequestParam() {}

  explicit DescribePurchasedApiResponseBodyRequestQueriesRequestParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiParameterName) {
      res["ApiParameterName"] = boost::any(*apiParameterName);
    }
    if (defaultValue) {
      res["DefaultValue"] = boost::any(*defaultValue);
    }
    if (demoValue) {
      res["DemoValue"] = boost::any(*demoValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (docOrder) {
      res["DocOrder"] = boost::any(*docOrder);
    }
    if (docShow) {
      res["DocShow"] = boost::any(*docShow);
    }
    if (enumValue) {
      res["EnumValue"] = boost::any(*enumValue);
    }
    if (jsonScheme) {
      res["JsonScheme"] = boost::any(*jsonScheme);
    }
    if (maxLength) {
      res["MaxLength"] = boost::any(*maxLength);
    }
    if (maxValue) {
      res["MaxValue"] = boost::any(*maxValue);
    }
    if (minLength) {
      res["MinLength"] = boost::any(*minLength);
    }
    if (minValue) {
      res["MinValue"] = boost::any(*minValue);
    }
    if (parameterType) {
      res["ParameterType"] = boost::any(*parameterType);
    }
    if (regularExpression) {
      res["RegularExpression"] = boost::any(*regularExpression);
    }
    if (required) {
      res["Required"] = boost::any(*required);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiParameterName") != m.end() && !m["ApiParameterName"].empty()) {
      apiParameterName = make_shared<string>(boost::any_cast<string>(m["ApiParameterName"]));
    }
    if (m.find("DefaultValue") != m.end() && !m["DefaultValue"].empty()) {
      defaultValue = make_shared<string>(boost::any_cast<string>(m["DefaultValue"]));
    }
    if (m.find("DemoValue") != m.end() && !m["DemoValue"].empty()) {
      demoValue = make_shared<string>(boost::any_cast<string>(m["DemoValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DocOrder") != m.end() && !m["DocOrder"].empty()) {
      docOrder = make_shared<string>(boost::any_cast<string>(m["DocOrder"]));
    }
    if (m.find("DocShow") != m.end() && !m["DocShow"].empty()) {
      docShow = make_shared<string>(boost::any_cast<string>(m["DocShow"]));
    }
    if (m.find("EnumValue") != m.end() && !m["EnumValue"].empty()) {
      enumValue = make_shared<string>(boost::any_cast<string>(m["EnumValue"]));
    }
    if (m.find("JsonScheme") != m.end() && !m["JsonScheme"].empty()) {
      jsonScheme = make_shared<string>(boost::any_cast<string>(m["JsonScheme"]));
    }
    if (m.find("MaxLength") != m.end() && !m["MaxLength"].empty()) {
      maxLength = make_shared<long>(boost::any_cast<long>(m["MaxLength"]));
    }
    if (m.find("MaxValue") != m.end() && !m["MaxValue"].empty()) {
      maxValue = make_shared<string>(boost::any_cast<string>(m["MaxValue"]));
    }
    if (m.find("MinLength") != m.end() && !m["MinLength"].empty()) {
      minLength = make_shared<long>(boost::any_cast<long>(m["MinLength"]));
    }
    if (m.find("MinValue") != m.end() && !m["MinValue"].empty()) {
      minValue = make_shared<string>(boost::any_cast<string>(m["MinValue"]));
    }
    if (m.find("ParameterType") != m.end() && !m["ParameterType"].empty()) {
      parameterType = make_shared<string>(boost::any_cast<string>(m["ParameterType"]));
    }
    if (m.find("RegularExpression") != m.end() && !m["RegularExpression"].empty()) {
      regularExpression = make_shared<string>(boost::any_cast<string>(m["RegularExpression"]));
    }
    if (m.find("Required") != m.end() && !m["Required"].empty()) {
      required = make_shared<string>(boost::any_cast<string>(m["Required"]));
    }
  }


  virtual ~DescribePurchasedApiResponseBodyRequestQueriesRequestParam() = default;
};
class DescribePurchasedApiResponseBodyRequestQueries : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePurchasedApiResponseBodyRequestQueriesRequestParam>> requestParam{};

  DescribePurchasedApiResponseBodyRequestQueries() {}

  explicit DescribePurchasedApiResponseBodyRequestQueries(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestParam) {
      vector<boost::any> temp1;
      for(auto item1:*requestParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RequestParam"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestParam") != m.end() && !m["RequestParam"].empty()) {
      if (typeid(vector<boost::any>) == m["RequestParam"].type()) {
        vector<DescribePurchasedApiResponseBodyRequestQueriesRequestParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RequestParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePurchasedApiResponseBodyRequestQueriesRequestParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        requestParam = make_shared<vector<DescribePurchasedApiResponseBodyRequestQueriesRequestParam>>(expect1);
      }
    }
  }


  virtual ~DescribePurchasedApiResponseBodyRequestQueries() = default;
};
class DescribePurchasedApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> apiName{};
  shared_ptr<string> bodyFormat{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> httpMethod{};
  shared_ptr<string> httpProtocol{};
  shared_ptr<string> mock{};
  shared_ptr<string> mockResult{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> path{};
  shared_ptr<DescribePurchasedApiResponseBodyPathParameters> pathParameters{};
  shared_ptr<string> postBodyDescription{};
  shared_ptr<string> postBodyType{};
  shared_ptr<string> regionId{};
  shared_ptr<DescribePurchasedApiResponseBodyRequestBody> requestBody{};
  shared_ptr<DescribePurchasedApiResponseBodyRequestHeaders> requestHeaders{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribePurchasedApiResponseBodyRequestQueries> requestQueries{};
  shared_ptr<string> resultSample{};
  shared_ptr<string> resultType{};
  shared_ptr<string> visibility{};

  DescribePurchasedApiResponseBody() {}

  explicit DescribePurchasedApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (bodyFormat) {
      res["BodyFormat"] = boost::any(*bodyFormat);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (httpMethod) {
      res["HttpMethod"] = boost::any(*httpMethod);
    }
    if (httpProtocol) {
      res["HttpProtocol"] = boost::any(*httpProtocol);
    }
    if (mock) {
      res["Mock"] = boost::any(*mock);
    }
    if (mockResult) {
      res["MockResult"] = boost::any(*mockResult);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (pathParameters) {
      res["PathParameters"] = pathParameters ? boost::any(pathParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (postBodyDescription) {
      res["PostBodyDescription"] = boost::any(*postBodyDescription);
    }
    if (postBodyType) {
      res["PostBodyType"] = boost::any(*postBodyType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestBody) {
      res["RequestBody"] = requestBody ? boost::any(requestBody->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestHeaders) {
      res["RequestHeaders"] = requestHeaders ? boost::any(requestHeaders->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (requestQueries) {
      res["RequestQueries"] = requestQueries ? boost::any(requestQueries->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resultSample) {
      res["ResultSample"] = boost::any(*resultSample);
    }
    if (resultType) {
      res["ResultType"] = boost::any(*resultType);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("BodyFormat") != m.end() && !m["BodyFormat"].empty()) {
      bodyFormat = make_shared<string>(boost::any_cast<string>(m["BodyFormat"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("HttpMethod") != m.end() && !m["HttpMethod"].empty()) {
      httpMethod = make_shared<string>(boost::any_cast<string>(m["HttpMethod"]));
    }
    if (m.find("HttpProtocol") != m.end() && !m["HttpProtocol"].empty()) {
      httpProtocol = make_shared<string>(boost::any_cast<string>(m["HttpProtocol"]));
    }
    if (m.find("Mock") != m.end() && !m["Mock"].empty()) {
      mock = make_shared<string>(boost::any_cast<string>(m["Mock"]));
    }
    if (m.find("MockResult") != m.end() && !m["MockResult"].empty()) {
      mockResult = make_shared<string>(boost::any_cast<string>(m["MockResult"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("PathParameters") != m.end() && !m["PathParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["PathParameters"].type()) {
        DescribePurchasedApiResponseBodyPathParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PathParameters"]));
        pathParameters = make_shared<DescribePurchasedApiResponseBodyPathParameters>(model1);
      }
    }
    if (m.find("PostBodyDescription") != m.end() && !m["PostBodyDescription"].empty()) {
      postBodyDescription = make_shared<string>(boost::any_cast<string>(m["PostBodyDescription"]));
    }
    if (m.find("PostBodyType") != m.end() && !m["PostBodyType"].empty()) {
      postBodyType = make_shared<string>(boost::any_cast<string>(m["PostBodyType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestBody") != m.end() && !m["RequestBody"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestBody"].type()) {
        DescribePurchasedApiResponseBodyRequestBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestBody"]));
        requestBody = make_shared<DescribePurchasedApiResponseBodyRequestBody>(model1);
      }
    }
    if (m.find("RequestHeaders") != m.end() && !m["RequestHeaders"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestHeaders"].type()) {
        DescribePurchasedApiResponseBodyRequestHeaders model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestHeaders"]));
        requestHeaders = make_shared<DescribePurchasedApiResponseBodyRequestHeaders>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RequestQueries") != m.end() && !m["RequestQueries"].empty()) {
      if (typeid(map<string, boost::any>) == m["RequestQueries"].type()) {
        DescribePurchasedApiResponseBodyRequestQueries model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RequestQueries"]));
        requestQueries = make_shared<DescribePurchasedApiResponseBodyRequestQueries>(model1);
      }
    }
    if (m.find("ResultSample") != m.end() && !m["ResultSample"].empty()) {
      resultSample = make_shared<string>(boost::any_cast<string>(m["ResultSample"]));
    }
    if (m.find("ResultType") != m.end() && !m["ResultType"].empty()) {
      resultType = make_shared<string>(boost::any_cast<string>(m["ResultType"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~DescribePurchasedApiResponseBody() = default;
};
class DescribePurchasedApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePurchasedApiResponseBody> body{};

  DescribePurchasedApiResponse() {}

  explicit DescribePurchasedApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribePurchasedApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePurchasedApiResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePurchasedApiResponse() = default;
};
class DescribePurchasedApiGroupDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};

  DescribePurchasedApiGroupDetailRequest() {}

  explicit DescribePurchasedApiGroupDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
  }


  virtual ~DescribePurchasedApiGroupDetailRequest() = default;
};
class DescribePurchasedApiGroupDetailResponseBodyDomainItemsDomainItem : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};

  DescribePurchasedApiGroupDetailResponseBodyDomainItemsDomainItem() {}

  explicit DescribePurchasedApiGroupDetailResponseBodyDomainItemsDomainItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
  }


  virtual ~DescribePurchasedApiGroupDetailResponseBodyDomainItemsDomainItem() = default;
};
class DescribePurchasedApiGroupDetailResponseBodyDomainItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePurchasedApiGroupDetailResponseBodyDomainItemsDomainItem>> domainItem{};

  DescribePurchasedApiGroupDetailResponseBodyDomainItems() {}

  explicit DescribePurchasedApiGroupDetailResponseBodyDomainItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainItem) {
      vector<boost::any> temp1;
      for(auto item1:*domainItem){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DomainItem"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainItem") != m.end() && !m["DomainItem"].empty()) {
      if (typeid(vector<boost::any>) == m["DomainItem"].type()) {
        vector<DescribePurchasedApiGroupDetailResponseBodyDomainItemsDomainItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DomainItem"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePurchasedApiGroupDetailResponseBodyDomainItemsDomainItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        domainItem = make_shared<vector<DescribePurchasedApiGroupDetailResponseBodyDomainItemsDomainItem>>(expect1);
      }
    }
  }


  virtual ~DescribePurchasedApiGroupDetailResponseBodyDomainItems() = default;
};
class DescribePurchasedApiGroupDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<DescribePurchasedApiGroupDetailResponseBodyDomainItems> domainItems{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  DescribePurchasedApiGroupDetailResponseBody() {}

  explicit DescribePurchasedApiGroupDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (domainItems) {
      res["DomainItems"] = domainItems ? boost::any(domainItems->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DomainItems") != m.end() && !m["DomainItems"].empty()) {
      if (typeid(map<string, boost::any>) == m["DomainItems"].type()) {
        DescribePurchasedApiGroupDetailResponseBodyDomainItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DomainItems"]));
        domainItems = make_shared<DescribePurchasedApiGroupDetailResponseBodyDomainItems>(model1);
      }
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribePurchasedApiGroupDetailResponseBody() = default;
};
class DescribePurchasedApiGroupDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePurchasedApiGroupDetailResponseBody> body{};

  DescribePurchasedApiGroupDetailResponse() {}

  explicit DescribePurchasedApiGroupDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribePurchasedApiGroupDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePurchasedApiGroupDetailResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePurchasedApiGroupDetailResponse() = default;
};
class DescribePurchasedApiGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupIds{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> securityToken{};

  DescribePurchasedApiGroupsRequest() {}

  explicit DescribePurchasedApiGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupIds) {
      res["GroupIds"] = boost::any(*groupIds);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      groupIds = make_shared<string>(boost::any_cast<string>(m["GroupIds"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribePurchasedApiGroupsRequest() = default;
};
class DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute : public Darabonba::Model {
public:
  shared_ptr<string> billingType{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> groupDescription{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<long> invokeTimesMax{};
  shared_ptr<long> invokeTimesNow{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};

  DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute() {}

  explicit DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingType) {
      res["BillingType"] = boost::any(*billingType);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (groupDescription) {
      res["GroupDescription"] = boost::any(*groupDescription);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (invokeTimesMax) {
      res["InvokeTimesMax"] = boost::any(*invokeTimesMax);
    }
    if (invokeTimesNow) {
      res["InvokeTimesNow"] = boost::any(*invokeTimesNow);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingType") != m.end() && !m["BillingType"].empty()) {
      billingType = make_shared<string>(boost::any_cast<string>(m["BillingType"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("GroupDescription") != m.end() && !m["GroupDescription"].empty()) {
      groupDescription = make_shared<string>(boost::any_cast<string>(m["GroupDescription"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("InvokeTimesMax") != m.end() && !m["InvokeTimesMax"].empty()) {
      invokeTimesMax = make_shared<long>(boost::any_cast<long>(m["InvokeTimesMax"]));
    }
    if (m.find("InvokeTimesNow") != m.end() && !m["InvokeTimesNow"].empty()) {
      invokeTimesNow = make_shared<long>(boost::any_cast<long>(m["InvokeTimesNow"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute() = default;
};
class DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute>> purchasedApiGroupAttribute{};

  DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes() {}

  explicit DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (purchasedApiGroupAttribute) {
      vector<boost::any> temp1;
      for(auto item1:*purchasedApiGroupAttribute){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PurchasedApiGroupAttribute"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PurchasedApiGroupAttribute") != m.end() && !m["PurchasedApiGroupAttribute"].empty()) {
      if (typeid(vector<boost::any>) == m["PurchasedApiGroupAttribute"].type()) {
        vector<DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PurchasedApiGroupAttribute"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        purchasedApiGroupAttribute = make_shared<vector<DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute>>(expect1);
      }
    }
  }


  virtual ~DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes() = default;
};
class DescribePurchasedApiGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes> purchasedApiGroupAttributes{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribePurchasedApiGroupsResponseBody() {}

  explicit DescribePurchasedApiGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (purchasedApiGroupAttributes) {
      res["PurchasedApiGroupAttributes"] = purchasedApiGroupAttributes ? boost::any(purchasedApiGroupAttributes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PurchasedApiGroupAttributes") != m.end() && !m["PurchasedApiGroupAttributes"].empty()) {
      if (typeid(map<string, boost::any>) == m["PurchasedApiGroupAttributes"].type()) {
        DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PurchasedApiGroupAttributes"]));
        purchasedApiGroupAttributes = make_shared<DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributes>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribePurchasedApiGroupsResponseBody() = default;
};
class DescribePurchasedApiGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePurchasedApiGroupsResponseBody> body{};

  DescribePurchasedApiGroupsResponse() {}

  explicit DescribePurchasedApiGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribePurchasedApiGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePurchasedApiGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePurchasedApiGroupsResponse() = default;
};
class DescribePurchasedApisRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> apiName{};
  shared_ptr<string> groupId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> stageName{};
  shared_ptr<string> visibility{};

  DescribePurchasedApisRequest() {}

  explicit DescribePurchasedApisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~DescribePurchasedApisRequest() = default;
};
class DescribePurchasedApisResponseBodyApiInfosApiInfo : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> apiName{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> regionId{};
  shared_ptr<string> stageName{};
  shared_ptr<string> visibility{};

  DescribePurchasedApisResponseBodyApiInfosApiInfo() {}

  explicit DescribePurchasedApisResponseBodyApiInfosApiInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~DescribePurchasedApisResponseBodyApiInfosApiInfo() = default;
};
class DescribePurchasedApisResponseBodyApiInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePurchasedApisResponseBodyApiInfosApiInfo>> apiInfo{};

  DescribePurchasedApisResponseBodyApiInfos() {}

  explicit DescribePurchasedApisResponseBodyApiInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiInfo) {
      vector<boost::any> temp1;
      for(auto item1:*apiInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApiInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiInfo") != m.end() && !m["ApiInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ApiInfo"].type()) {
        vector<DescribePurchasedApisResponseBodyApiInfosApiInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApiInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePurchasedApisResponseBodyApiInfosApiInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apiInfo = make_shared<vector<DescribePurchasedApisResponseBodyApiInfosApiInfo>>(expect1);
      }
    }
  }


  virtual ~DescribePurchasedApisResponseBodyApiInfos() = default;
};
class DescribePurchasedApisResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribePurchasedApisResponseBodyApiInfos> apiInfos{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribePurchasedApisResponseBody() {}

  explicit DescribePurchasedApisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiInfos) {
      res["ApiInfos"] = apiInfos ? boost::any(apiInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiInfos") != m.end() && !m["ApiInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApiInfos"].type()) {
        DescribePurchasedApisResponseBodyApiInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApiInfos"]));
        apiInfos = make_shared<DescribePurchasedApisResponseBodyApiInfos>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribePurchasedApisResponseBody() = default;
};
class DescribePurchasedApisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePurchasedApisResponseBody> body{};

  DescribePurchasedApisResponse() {}

  explicit DescribePurchasedApisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribePurchasedApisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePurchasedApisResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePurchasedApisResponse() = default;
};
class DescribeRaceWorkForInnerRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};

  DescribeRaceWorkForInnerRequest() {}

  explicit DescribeRaceWorkForInnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
  }


  virtual ~DescribeRaceWorkForInnerRequest() = default;
};
class DescribeRaceWorkForInnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> groupId{};
  shared_ptr<string> keywords{};
  shared_ptr<string> logoUrl{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> shortDescription{};
  shared_ptr<string> workName{};

  DescribeRaceWorkForInnerResponseBody() {}

  explicit DescribeRaceWorkForInnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (keywords) {
      res["Keywords"] = boost::any(*keywords);
    }
    if (logoUrl) {
      res["LogoUrl"] = boost::any(*logoUrl);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (shortDescription) {
      res["ShortDescription"] = boost::any(*shortDescription);
    }
    if (workName) {
      res["WorkName"] = boost::any(*workName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Keywords") != m.end() && !m["Keywords"].empty()) {
      keywords = make_shared<string>(boost::any_cast<string>(m["Keywords"]));
    }
    if (m.find("LogoUrl") != m.end() && !m["LogoUrl"].empty()) {
      logoUrl = make_shared<string>(boost::any_cast<string>(m["LogoUrl"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ShortDescription") != m.end() && !m["ShortDescription"].empty()) {
      shortDescription = make_shared<string>(boost::any_cast<string>(m["ShortDescription"]));
    }
    if (m.find("WorkName") != m.end() && !m["WorkName"].empty()) {
      workName = make_shared<string>(boost::any_cast<string>(m["WorkName"]));
    }
  }


  virtual ~DescribeRaceWorkForInnerResponseBody() = default;
};
class DescribeRaceWorkForInnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRaceWorkForInnerResponseBody> body{};

  DescribeRaceWorkForInnerResponse() {}

  explicit DescribeRaceWorkForInnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRaceWorkForInnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRaceWorkForInnerResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRaceWorkForInnerResponse() = default;
};
class DescribeRaceWorksForInnerRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeRaceWorksForInnerRequest() {}

  explicit DescribeRaceWorksForInnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeRaceWorksForInnerRequest() = default;
};
class DescribeRaceWorksForInnerResponseBodyApiWorksApiWork : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<string> createTime{};
  shared_ptr<string> groupId{};
  shared_ptr<string> keywords{};
  shared_ptr<string> logoUrl{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> shortDescription{};
  shared_ptr<string> workName{};

  DescribeRaceWorksForInnerResponseBodyApiWorksApiWork() {}

  explicit DescribeRaceWorksForInnerResponseBodyApiWorksApiWork(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (keywords) {
      res["Keywords"] = boost::any(*keywords);
    }
    if (logoUrl) {
      res["LogoUrl"] = boost::any(*logoUrl);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (shortDescription) {
      res["ShortDescription"] = boost::any(*shortDescription);
    }
    if (workName) {
      res["WorkName"] = boost::any(*workName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Keywords") != m.end() && !m["Keywords"].empty()) {
      keywords = make_shared<string>(boost::any_cast<string>(m["Keywords"]));
    }
    if (m.find("LogoUrl") != m.end() && !m["LogoUrl"].empty()) {
      logoUrl = make_shared<string>(boost::any_cast<string>(m["LogoUrl"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("ShortDescription") != m.end() && !m["ShortDescription"].empty()) {
      shortDescription = make_shared<string>(boost::any_cast<string>(m["ShortDescription"]));
    }
    if (m.find("WorkName") != m.end() && !m["WorkName"].empty()) {
      workName = make_shared<string>(boost::any_cast<string>(m["WorkName"]));
    }
  }


  virtual ~DescribeRaceWorksForInnerResponseBodyApiWorksApiWork() = default;
};
class DescribeRaceWorksForInnerResponseBodyApiWorks : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRaceWorksForInnerResponseBodyApiWorksApiWork>> apiWork{};

  DescribeRaceWorksForInnerResponseBodyApiWorks() {}

  explicit DescribeRaceWorksForInnerResponseBodyApiWorks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiWork) {
      vector<boost::any> temp1;
      for(auto item1:*apiWork){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApiWork"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiWork") != m.end() && !m["ApiWork"].empty()) {
      if (typeid(vector<boost::any>) == m["ApiWork"].type()) {
        vector<DescribeRaceWorksForInnerResponseBodyApiWorksApiWork> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApiWork"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRaceWorksForInnerResponseBodyApiWorksApiWork model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apiWork = make_shared<vector<DescribeRaceWorksForInnerResponseBodyApiWorksApiWork>>(expect1);
      }
    }
  }


  virtual ~DescribeRaceWorksForInnerResponseBodyApiWorks() = default;
};
class DescribeRaceWorksForInnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeRaceWorksForInnerResponseBodyApiWorks> apiWorks{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  DescribeRaceWorksForInnerResponseBody() {}

  explicit DescribeRaceWorksForInnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiWorks) {
      res["ApiWorks"] = apiWorks ? boost::any(apiWorks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiWorks") != m.end() && !m["ApiWorks"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApiWorks"].type()) {
        DescribeRaceWorksForInnerResponseBodyApiWorks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApiWorks"]));
        apiWorks = make_shared<DescribeRaceWorksForInnerResponseBodyApiWorks>(model1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeRaceWorksForInnerResponseBody() = default;
};
class DescribeRaceWorksForInnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRaceWorksForInnerResponseBody> body{};

  DescribeRaceWorksForInnerResponse() {}

  explicit DescribeRaceWorksForInnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRaceWorksForInnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRaceWorksForInnerResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRaceWorksForInnerResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> language{};
  shared_ptr<string> securityToken{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegionsRegion : public Darabonba::Model {
public:
  shared_ptr<string> endPoint{};
  shared_ptr<string> localName{};
  shared_ptr<string> regionId{};

  DescribeRegionsResponseBodyRegionsRegion() {}

  explicit DescribeRegionsResponseBodyRegionsRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endPoint) {
      res["EndPoint"] = boost::any(*endPoint);
    }
    if (localName) {
      res["LocalName"] = boost::any(*localName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndPoint") != m.end() && !m["EndPoint"].empty()) {
      endPoint = make_shared<string>(boost::any_cast<string>(m["EndPoint"]));
    }
    if (m.find("LocalName") != m.end() && !m["LocalName"].empty()) {
      localName = make_shared<string>(boost::any_cast<string>(m["LocalName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionsRegion() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegionsRegion>> region{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      vector<boost::any> temp1;
      for(auto item1:*region){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Region"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      if (typeid(vector<boost::any>) == m["Region"].type()) {
        vector<DescribeRegionsResponseBodyRegionsRegion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Region"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegionsRegion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        region = make_shared<vector<DescribeRegionsResponseBodyRegionsRegion>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeRegionsResponseBodyRegions> regions{};
  shared_ptr<string> requestId{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regions) {
      res["Regions"] = regions ? boost::any(regions->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Regions"].type()) {
        DescribeRegionsResponseBodyRegions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Regions"]));
        regions = make_shared<DescribeRegionsResponseBodyRegions>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeRegionsResponseBody() = default;
};
class DescribeRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRegionsResponseBody> body{};

  DescribeRegionsResponse() {}

  explicit DescribeRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class DescribeRulesByApiRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> groupId{};
  shared_ptr<string> stageName{};

  DescribeRulesByApiRequest() {}

  explicit DescribeRulesByApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~DescribeRulesByApiRequest() = default;
};
class DescribeRulesByApiResponseBodyRulesRule : public Darabonba::Model {
public:
  shared_ptr<long> createdTime{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleName{};
  shared_ptr<string> ruleType{};

  DescribeRulesByApiResponseBodyRulesRule() {}

  explicit DescribeRulesByApiResponseBodyRulesRule(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleName) {
      res["RuleName"] = boost::any(*ruleName);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<long>(boost::any_cast<long>(m["CreatedTime"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleName") != m.end() && !m["RuleName"].empty()) {
      ruleName = make_shared<string>(boost::any_cast<string>(m["RuleName"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
  }


  virtual ~DescribeRulesByApiResponseBodyRulesRule() = default;
};
class DescribeRulesByApiResponseBodyRules : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRulesByApiResponseBodyRulesRule>> rule{};

  DescribeRulesByApiResponseBodyRules() {}

  explicit DescribeRulesByApiResponseBodyRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rule) {
      vector<boost::any> temp1;
      for(auto item1:*rule){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Rule"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rule") != m.end() && !m["Rule"].empty()) {
      if (typeid(vector<boost::any>) == m["Rule"].type()) {
        vector<DescribeRulesByApiResponseBodyRulesRule> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Rule"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRulesByApiResponseBodyRulesRule model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rule = make_shared<vector<DescribeRulesByApiResponseBodyRulesRule>>(expect1);
      }
    }
  }


  virtual ~DescribeRulesByApiResponseBodyRules() = default;
};
class DescribeRulesByApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeRulesByApiResponseBodyRules> rules{};

  DescribeRulesByApiResponseBody() {}

  explicit DescribeRulesByApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rules) {
      res["Rules"] = rules ? boost::any(rules->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Rules") != m.end() && !m["Rules"].empty()) {
      if (typeid(map<string, boost::any>) == m["Rules"].type()) {
        DescribeRulesByApiResponseBodyRules model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Rules"]));
        rules = make_shared<DescribeRulesByApiResponseBodyRules>(model1);
      }
    }
  }


  virtual ~DescribeRulesByApiResponseBody() = default;
};
class DescribeRulesByApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRulesByApiResponseBody> body{};

  DescribeRulesByApiResponse() {}

  explicit DescribeRulesByApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeRulesByApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRulesByApiResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRulesByApiResponse() = default;
};
class DescribeSecretKeysRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> secretKeyId{};
  shared_ptr<string> secretKeyName{};

  DescribeSecretKeysRequest() {}

  explicit DescribeSecretKeysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (secretKeyId) {
      res["SecretKeyId"] = boost::any(*secretKeyId);
    }
    if (secretKeyName) {
      res["SecretKeyName"] = boost::any(*secretKeyName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SecretKeyId") != m.end() && !m["SecretKeyId"].empty()) {
      secretKeyId = make_shared<string>(boost::any_cast<string>(m["SecretKeyId"]));
    }
    if (m.find("SecretKeyName") != m.end() && !m["SecretKeyName"].empty()) {
      secretKeyName = make_shared<string>(boost::any_cast<string>(m["SecretKeyName"]));
    }
  }


  virtual ~DescribeSecretKeysRequest() = default;
};
class DescribeSecretKeysResponseBodySecretKeysSecretKey : public Darabonba::Model {
public:
  shared_ptr<string> createdTime{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> regionId{};
  shared_ptr<string> secretKey{};
  shared_ptr<string> secretKeyId{};
  shared_ptr<string> secretKeyName{};
  shared_ptr<string> secretKeyValue{};

  DescribeSecretKeysResponseBodySecretKeysSecretKey() {}

  explicit DescribeSecretKeysResponseBodySecretKeysSecretKey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (secretKey) {
      res["SecretKey"] = boost::any(*secretKey);
    }
    if (secretKeyId) {
      res["SecretKeyId"] = boost::any(*secretKeyId);
    }
    if (secretKeyName) {
      res["SecretKeyName"] = boost::any(*secretKeyName);
    }
    if (secretKeyValue) {
      res["SecretKeyValue"] = boost::any(*secretKeyValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecretKey") != m.end() && !m["SecretKey"].empty()) {
      secretKey = make_shared<string>(boost::any_cast<string>(m["SecretKey"]));
    }
    if (m.find("SecretKeyId") != m.end() && !m["SecretKeyId"].empty()) {
      secretKeyId = make_shared<string>(boost::any_cast<string>(m["SecretKeyId"]));
    }
    if (m.find("SecretKeyName") != m.end() && !m["SecretKeyName"].empty()) {
      secretKeyName = make_shared<string>(boost::any_cast<string>(m["SecretKeyName"]));
    }
    if (m.find("SecretKeyValue") != m.end() && !m["SecretKeyValue"].empty()) {
      secretKeyValue = make_shared<string>(boost::any_cast<string>(m["SecretKeyValue"]));
    }
  }


  virtual ~DescribeSecretKeysResponseBodySecretKeysSecretKey() = default;
};
class DescribeSecretKeysResponseBodySecretKeys : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSecretKeysResponseBodySecretKeysSecretKey>> secretKey{};

  DescribeSecretKeysResponseBodySecretKeys() {}

  explicit DescribeSecretKeysResponseBodySecretKeys(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (secretKey) {
      vector<boost::any> temp1;
      for(auto item1:*secretKey){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SecretKey"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecretKey") != m.end() && !m["SecretKey"].empty()) {
      if (typeid(vector<boost::any>) == m["SecretKey"].type()) {
        vector<DescribeSecretKeysResponseBodySecretKeysSecretKey> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SecretKey"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSecretKeysResponseBodySecretKeysSecretKey model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        secretKey = make_shared<vector<DescribeSecretKeysResponseBodySecretKeysSecretKey>>(expect1);
      }
    }
  }


  virtual ~DescribeSecretKeysResponseBodySecretKeys() = default;
};
class DescribeSecretKeysResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeSecretKeysResponseBodySecretKeys> secretKeys{};
  shared_ptr<long> totalCount{};

  DescribeSecretKeysResponseBody() {}

  explicit DescribeSecretKeysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (secretKeys) {
      res["SecretKeys"] = secretKeys ? boost::any(secretKeys->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecretKeys") != m.end() && !m["SecretKeys"].empty()) {
      if (typeid(map<string, boost::any>) == m["SecretKeys"].type()) {
        DescribeSecretKeysResponseBodySecretKeys model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SecretKeys"]));
        secretKeys = make_shared<DescribeSecretKeysResponseBodySecretKeys>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeSecretKeysResponseBody() = default;
};
class DescribeSecretKeysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSecretKeysResponseBody> body{};

  DescribeSecretKeysResponse() {}

  explicit DescribeSecretKeysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeSecretKeysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSecretKeysResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSecretKeysResponse() = default;
};
class DescribeSystemParametersRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};

  DescribeSystemParametersRequest() {}

  explicit DescribeSystemParametersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeSystemParametersRequest() = default;
};
class DescribeSystemParametersResponseBodySystemParametersSystemParameter : public Darabonba::Model {
public:
  shared_ptr<string> demoValue{};
  shared_ptr<string> description{};
  shared_ptr<string> paramName{};
  shared_ptr<string> paramType{};

  DescribeSystemParametersResponseBodySystemParametersSystemParameter() {}

  explicit DescribeSystemParametersResponseBodySystemParametersSystemParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (demoValue) {
      res["DemoValue"] = boost::any(*demoValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (paramName) {
      res["ParamName"] = boost::any(*paramName);
    }
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DemoValue") != m.end() && !m["DemoValue"].empty()) {
      demoValue = make_shared<string>(boost::any_cast<string>(m["DemoValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ParamName") != m.end() && !m["ParamName"].empty()) {
      paramName = make_shared<string>(boost::any_cast<string>(m["ParamName"]));
    }
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
  }


  virtual ~DescribeSystemParametersResponseBodySystemParametersSystemParameter() = default;
};
class DescribeSystemParametersResponseBodySystemParameters : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSystemParametersResponseBodySystemParametersSystemParameter>> systemParameter{};

  DescribeSystemParametersResponseBodySystemParameters() {}

  explicit DescribeSystemParametersResponseBodySystemParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (systemParameter) {
      vector<boost::any> temp1;
      for(auto item1:*systemParameter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SystemParameter"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SystemParameter") != m.end() && !m["SystemParameter"].empty()) {
      if (typeid(vector<boost::any>) == m["SystemParameter"].type()) {
        vector<DescribeSystemParametersResponseBodySystemParametersSystemParameter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SystemParameter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSystemParametersResponseBodySystemParametersSystemParameter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        systemParameter = make_shared<vector<DescribeSystemParametersResponseBodySystemParametersSystemParameter>>(expect1);
      }
    }
  }


  virtual ~DescribeSystemParametersResponseBodySystemParameters() = default;
};
class DescribeSystemParametersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeSystemParametersResponseBodySystemParameters> systemParameters{};

  DescribeSystemParametersResponseBody() {}

  explicit DescribeSystemParametersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (systemParameters) {
      res["SystemParameters"] = systemParameters ? boost::any(systemParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SystemParameters") != m.end() && !m["SystemParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["SystemParameters"].type()) {
        DescribeSystemParametersResponseBodySystemParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SystemParameters"]));
        systemParameters = make_shared<DescribeSystemParametersResponseBodySystemParameters>(model1);
      }
    }
  }


  virtual ~DescribeSystemParametersResponseBody() = default;
};
class DescribeSystemParametersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSystemParametersResponseBody> body{};

  DescribeSystemParametersResponse() {}

  explicit DescribeSystemParametersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeSystemParametersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSystemParametersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSystemParametersResponse() = default;
};
class DescribeSystemParamsRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};

  DescribeSystemParamsRequest() {}

  explicit DescribeSystemParamsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeSystemParamsRequest() = default;
};
class DescribeSystemParamsResponseBodySystemParamsSystemParam : public Darabonba::Model {
public:
  shared_ptr<string> demoValue{};
  shared_ptr<string> description{};
  shared_ptr<string> paramName{};
  shared_ptr<string> paramType{};

  DescribeSystemParamsResponseBodySystemParamsSystemParam() {}

  explicit DescribeSystemParamsResponseBodySystemParamsSystemParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (demoValue) {
      res["DemoValue"] = boost::any(*demoValue);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (paramName) {
      res["ParamName"] = boost::any(*paramName);
    }
    if (paramType) {
      res["ParamType"] = boost::any(*paramType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DemoValue") != m.end() && !m["DemoValue"].empty()) {
      demoValue = make_shared<string>(boost::any_cast<string>(m["DemoValue"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ParamName") != m.end() && !m["ParamName"].empty()) {
      paramName = make_shared<string>(boost::any_cast<string>(m["ParamName"]));
    }
    if (m.find("ParamType") != m.end() && !m["ParamType"].empty()) {
      paramType = make_shared<string>(boost::any_cast<string>(m["ParamType"]));
    }
  }


  virtual ~DescribeSystemParamsResponseBodySystemParamsSystemParam() = default;
};
class DescribeSystemParamsResponseBodySystemParams : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSystemParamsResponseBodySystemParamsSystemParam>> systemParam{};

  DescribeSystemParamsResponseBodySystemParams() {}

  explicit DescribeSystemParamsResponseBodySystemParams(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (systemParam) {
      vector<boost::any> temp1;
      for(auto item1:*systemParam){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SystemParam"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SystemParam") != m.end() && !m["SystemParam"].empty()) {
      if (typeid(vector<boost::any>) == m["SystemParam"].type()) {
        vector<DescribeSystemParamsResponseBodySystemParamsSystemParam> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SystemParam"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSystemParamsResponseBodySystemParamsSystemParam model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        systemParam = make_shared<vector<DescribeSystemParamsResponseBodySystemParamsSystemParam>>(expect1);
      }
    }
  }


  virtual ~DescribeSystemParamsResponseBodySystemParams() = default;
};
class DescribeSystemParamsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<DescribeSystemParamsResponseBodySystemParams> systemParams{};

  DescribeSystemParamsResponseBody() {}

  explicit DescribeSystemParamsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (systemParams) {
      res["SystemParams"] = systemParams ? boost::any(systemParams->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SystemParams") != m.end() && !m["SystemParams"].empty()) {
      if (typeid(map<string, boost::any>) == m["SystemParams"].type()) {
        DescribeSystemParamsResponseBodySystemParams model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SystemParams"]));
        systemParams = make_shared<DescribeSystemParamsResponseBodySystemParams>(model1);
      }
    }
  }


  virtual ~DescribeSystemParamsResponseBody() = default;
};
class DescribeSystemParamsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSystemParamsResponseBody> body{};

  DescribeSystemParamsResponse() {}

  explicit DescribeSystemParamsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeSystemParamsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSystemParamsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSystemParamsResponse() = default;
};
class DescribeTrafficControlsRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiUid{};
  shared_ptr<string> groupId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> stageName{};
  shared_ptr<string> trafficControlId{};
  shared_ptr<string> trafficControlName{};

  DescribeTrafficControlsRequest() {}

  explicit DescribeTrafficControlsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiUid) {
      res["ApiUid"] = boost::any(*apiUid);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    if (trafficControlId) {
      res["TrafficControlId"] = boost::any(*trafficControlId);
    }
    if (trafficControlName) {
      res["TrafficControlName"] = boost::any(*trafficControlName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiUid") != m.end() && !m["ApiUid"].empty()) {
      apiUid = make_shared<string>(boost::any_cast<string>(m["ApiUid"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
    if (m.find("TrafficControlId") != m.end() && !m["TrafficControlId"].empty()) {
      trafficControlId = make_shared<string>(boost::any_cast<string>(m["TrafficControlId"]));
    }
    if (m.find("TrafficControlName") != m.end() && !m["TrafficControlName"].empty()) {
      trafficControlName = make_shared<string>(boost::any_cast<string>(m["TrafficControlName"]));
    }
  }


  virtual ~DescribeTrafficControlsRequest() = default;
};
class DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial : public Darabonba::Model {
public:
  shared_ptr<string> specialKey{};
  shared_ptr<long> trafficValue{};

  DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial() {}

  explicit DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (specialKey) {
      res["SpecialKey"] = boost::any(*specialKey);
    }
    if (trafficValue) {
      res["TrafficValue"] = boost::any(*trafficValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpecialKey") != m.end() && !m["SpecialKey"].empty()) {
      specialKey = make_shared<string>(boost::any_cast<string>(m["SpecialKey"]));
    }
    if (m.find("TrafficValue") != m.end() && !m["TrafficValue"].empty()) {
      trafficValue = make_shared<long>(boost::any_cast<long>(m["TrafficValue"]));
    }
  }


  virtual ~DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial() = default;
};
class DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial>> special{};

  DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials() {}

  explicit DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (special) {
      vector<boost::any> temp1;
      for(auto item1:*special){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Special"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Special") != m.end() && !m["Special"].empty()) {
      if (typeid(vector<boost::any>) == m["Special"].type()) {
        vector<DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Special"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        special = make_shared<vector<DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecialsSpecial>>(expect1);
      }
    }
  }


  virtual ~DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials() = default;
};
class DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy : public Darabonba::Model {
public:
  shared_ptr<string> specialType{};
  shared_ptr<DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials> specials{};

  DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy() {}

  explicit DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (specialType) {
      res["SpecialType"] = boost::any(*specialType);
    }
    if (specials) {
      res["Specials"] = specials ? boost::any(specials->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpecialType") != m.end() && !m["SpecialType"].empty()) {
      specialType = make_shared<string>(boost::any_cast<string>(m["SpecialType"]));
    }
    if (m.find("Specials") != m.end() && !m["Specials"].empty()) {
      if (typeid(map<string, boost::any>) == m["Specials"].type()) {
        DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Specials"]));
        specials = make_shared<DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicySpecials>(model1);
      }
    }
  }


  virtual ~DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy() = default;
};
class DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy>> specialPolicy{};

  DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies() {}

  explicit DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (specialPolicy) {
      vector<boost::any> temp1;
      for(auto item1:*specialPolicy){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SpecialPolicy"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SpecialPolicy") != m.end() && !m["SpecialPolicy"].empty()) {
      if (typeid(vector<boost::any>) == m["SpecialPolicy"].type()) {
        vector<DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SpecialPolicy"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        specialPolicy = make_shared<vector<DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPoliciesSpecialPolicy>>(expect1);
      }
    }
  }


  virtual ~DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies() = default;
};
class DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl : public Darabonba::Model {
public:
  shared_ptr<long> apiDefault{};
  shared_ptr<long> appDefault{};
  shared_ptr<string> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies> specialPolicies{};
  shared_ptr<string> trafficControlId{};
  shared_ptr<string> trafficControlName{};
  shared_ptr<string> trafficControlUnit{};
  shared_ptr<long> userDefault{};

  DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl() {}

  explicit DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiDefault) {
      res["ApiDefault"] = boost::any(*apiDefault);
    }
    if (appDefault) {
      res["AppDefault"] = boost::any(*appDefault);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (specialPolicies) {
      res["SpecialPolicies"] = specialPolicies ? boost::any(specialPolicies->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (trafficControlId) {
      res["TrafficControlId"] = boost::any(*trafficControlId);
    }
    if (trafficControlName) {
      res["TrafficControlName"] = boost::any(*trafficControlName);
    }
    if (trafficControlUnit) {
      res["TrafficControlUnit"] = boost::any(*trafficControlUnit);
    }
    if (userDefault) {
      res["UserDefault"] = boost::any(*userDefault);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiDefault") != m.end() && !m["ApiDefault"].empty()) {
      apiDefault = make_shared<long>(boost::any_cast<long>(m["ApiDefault"]));
    }
    if (m.find("AppDefault") != m.end() && !m["AppDefault"].empty()) {
      appDefault = make_shared<long>(boost::any_cast<long>(m["AppDefault"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<string>(boost::any_cast<string>(m["CreatedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("SpecialPolicies") != m.end() && !m["SpecialPolicies"].empty()) {
      if (typeid(map<string, boost::any>) == m["SpecialPolicies"].type()) {
        DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SpecialPolicies"]));
        specialPolicies = make_shared<DescribeTrafficControlsResponseBodyTrafficControlsTrafficControlSpecialPolicies>(model1);
      }
    }
    if (m.find("TrafficControlId") != m.end() && !m["TrafficControlId"].empty()) {
      trafficControlId = make_shared<string>(boost::any_cast<string>(m["TrafficControlId"]));
    }
    if (m.find("TrafficControlName") != m.end() && !m["TrafficControlName"].empty()) {
      trafficControlName = make_shared<string>(boost::any_cast<string>(m["TrafficControlName"]));
    }
    if (m.find("TrafficControlUnit") != m.end() && !m["TrafficControlUnit"].empty()) {
      trafficControlUnit = make_shared<string>(boost::any_cast<string>(m["TrafficControlUnit"]));
    }
    if (m.find("UserDefault") != m.end() && !m["UserDefault"].empty()) {
      userDefault = make_shared<long>(boost::any_cast<long>(m["UserDefault"]));
    }
  }


  virtual ~DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl() = default;
};
class DescribeTrafficControlsResponseBodyTrafficControls : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl>> trafficControl{};

  DescribeTrafficControlsResponseBodyTrafficControls() {}

  explicit DescribeTrafficControlsResponseBodyTrafficControls(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (trafficControl) {
      vector<boost::any> temp1;
      for(auto item1:*trafficControl){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TrafficControl"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TrafficControl") != m.end() && !m["TrafficControl"].empty()) {
      if (typeid(vector<boost::any>) == m["TrafficControl"].type()) {
        vector<DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TrafficControl"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        trafficControl = make_shared<vector<DescribeTrafficControlsResponseBodyTrafficControlsTrafficControl>>(expect1);
      }
    }
  }


  virtual ~DescribeTrafficControlsResponseBodyTrafficControls() = default;
};
class DescribeTrafficControlsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeTrafficControlsResponseBodyTrafficControls> trafficControls{};

  DescribeTrafficControlsResponseBody() {}

  explicit DescribeTrafficControlsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (trafficControls) {
      res["TrafficControls"] = trafficControls ? boost::any(trafficControls->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("TrafficControls") != m.end() && !m["TrafficControls"].empty()) {
      if (typeid(map<string, boost::any>) == m["TrafficControls"].type()) {
        DescribeTrafficControlsResponseBodyTrafficControls model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TrafficControls"]));
        trafficControls = make_shared<DescribeTrafficControlsResponseBodyTrafficControls>(model1);
      }
    }
  }


  virtual ~DescribeTrafficControlsResponseBody() = default;
};
class DescribeTrafficControlsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTrafficControlsResponseBody> body{};

  DescribeTrafficControlsResponse() {}

  explicit DescribeTrafficControlsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeTrafficControlsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTrafficControlsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTrafficControlsResponse() = default;
};
class DescribeUserWhiteListsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> type{};
  shared_ptr<long> uid{};

  DescribeUserWhiteListsRequest() {}

  explicit DescribeUserWhiteListsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
  }


  virtual ~DescribeUserWhiteListsRequest() = default;
};
class DescribeUserWhiteListsResponseBodyUserWhiteListInfosUserWhiteListInfo : public Darabonba::Model {
public:
  shared_ptr<string> aoneId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> description{};
  shared_ptr<long> id{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> type{};
  shared_ptr<long> uid{};
  shared_ptr<string> value{};

  DescribeUserWhiteListsResponseBodyUserWhiteListInfosUserWhiteListInfo() {}

  explicit DescribeUserWhiteListsResponseBodyUserWhiteListInfosUserWhiteListInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aoneId) {
      res["AoneId"] = boost::any(*aoneId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AoneId") != m.end() && !m["AoneId"].empty()) {
      aoneId = make_shared<string>(boost::any_cast<string>(m["AoneId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeUserWhiteListsResponseBodyUserWhiteListInfosUserWhiteListInfo() = default;
};
class DescribeUserWhiteListsResponseBodyUserWhiteListInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeUserWhiteListsResponseBodyUserWhiteListInfosUserWhiteListInfo>> userWhiteListInfo{};

  DescribeUserWhiteListsResponseBodyUserWhiteListInfos() {}

  explicit DescribeUserWhiteListsResponseBodyUserWhiteListInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userWhiteListInfo) {
      vector<boost::any> temp1;
      for(auto item1:*userWhiteListInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserWhiteListInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserWhiteListInfo") != m.end() && !m["UserWhiteListInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["UserWhiteListInfo"].type()) {
        vector<DescribeUserWhiteListsResponseBodyUserWhiteListInfosUserWhiteListInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserWhiteListInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUserWhiteListsResponseBodyUserWhiteListInfosUserWhiteListInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userWhiteListInfo = make_shared<vector<DescribeUserWhiteListsResponseBodyUserWhiteListInfosUserWhiteListInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeUserWhiteListsResponseBodyUserWhiteListInfos() = default;
};
class DescribeUserWhiteListsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeUserWhiteListsResponseBodyUserWhiteListInfos> userWhiteListInfos{};

  DescribeUserWhiteListsResponseBody() {}

  explicit DescribeUserWhiteListsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (userWhiteListInfos) {
      res["UserWhiteListInfos"] = userWhiteListInfos ? boost::any(userWhiteListInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("UserWhiteListInfos") != m.end() && !m["UserWhiteListInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserWhiteListInfos"].type()) {
        DescribeUserWhiteListsResponseBodyUserWhiteListInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserWhiteListInfos"]));
        userWhiteListInfos = make_shared<DescribeUserWhiteListsResponseBodyUserWhiteListInfos>(model1);
      }
    }
  }


  virtual ~DescribeUserWhiteListsResponseBody() = default;
};
class DescribeUserWhiteListsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUserWhiteListsResponseBody> body{};

  DescribeUserWhiteListsResponse() {}

  explicit DescribeUserWhiteListsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DescribeUserWhiteListsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUserWhiteListsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUserWhiteListsResponse() = default;
};
class IsIncludedByUserWhitelistRequest : public Darabonba::Model {
public:
  shared_ptr<string> type{};

  IsIncludedByUserWhitelistRequest() {}

  explicit IsIncludedByUserWhitelistRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~IsIncludedByUserWhitelistRequest() = default;
};
class IsIncludedByUserWhitelistResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> isIncluded{};
  shared_ptr<string> requestId{};

  IsIncludedByUserWhitelistResponseBody() {}

  explicit IsIncludedByUserWhitelistResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isIncluded) {
      res["IsIncluded"] = boost::any(*isIncluded);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsIncluded") != m.end() && !m["IsIncluded"].empty()) {
      isIncluded = make_shared<bool>(boost::any_cast<bool>(m["IsIncluded"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~IsIncludedByUserWhitelistResponseBody() = default;
};
class IsIncludedByUserWhitelistResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<IsIncludedByUserWhitelistResponseBody> body{};

  IsIncludedByUserWhitelistResponse() {}

  explicit IsIncludedByUserWhitelistResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        IsIncludedByUserWhitelistResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<IsIncludedByUserWhitelistResponseBody>(model1);
      }
    }
  }


  virtual ~IsIncludedByUserWhitelistResponse() = default;
};
class ModifyApiRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> apiName{};
  shared_ptr<string> authType{};
  shared_ptr<string> bodyFormat{};
  shared_ptr<string> constantParameters{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> httpMethod{};
  shared_ptr<string> httpProtocol{};
  shared_ptr<string> path{};
  shared_ptr<string> pathParameters{};
  shared_ptr<string> postBodyDescription{};
  shared_ptr<string> postBodyType{};
  shared_ptr<string> requestBody{};
  shared_ptr<string> requestHeaders{};
  shared_ptr<string> requestQueries{};
  shared_ptr<string> resultSample{};
  shared_ptr<string> resultType{};
  shared_ptr<string> serviceAddress{};
  shared_ptr<string> serviceProtocol{};
  shared_ptr<long> serviceTimeout{};
  shared_ptr<string> systemParameters{};
  shared_ptr<string> visibility{};

  ModifyApiRequest() {}

  explicit ModifyApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (authType) {
      res["AuthType"] = boost::any(*authType);
    }
    if (bodyFormat) {
      res["BodyFormat"] = boost::any(*bodyFormat);
    }
    if (constantParameters) {
      res["ConstantParameters"] = boost::any(*constantParameters);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (httpMethod) {
      res["HttpMethod"] = boost::any(*httpMethod);
    }
    if (httpProtocol) {
      res["HttpProtocol"] = boost::any(*httpProtocol);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (pathParameters) {
      res["PathParameters"] = boost::any(*pathParameters);
    }
    if (postBodyDescription) {
      res["PostBodyDescription"] = boost::any(*postBodyDescription);
    }
    if (postBodyType) {
      res["PostBodyType"] = boost::any(*postBodyType);
    }
    if (requestBody) {
      res["RequestBody"] = boost::any(*requestBody);
    }
    if (requestHeaders) {
      res["RequestHeaders"] = boost::any(*requestHeaders);
    }
    if (requestQueries) {
      res["RequestQueries"] = boost::any(*requestQueries);
    }
    if (resultSample) {
      res["ResultSample"] = boost::any(*resultSample);
    }
    if (resultType) {
      res["ResultType"] = boost::any(*resultType);
    }
    if (serviceAddress) {
      res["ServiceAddress"] = boost::any(*serviceAddress);
    }
    if (serviceProtocol) {
      res["ServiceProtocol"] = boost::any(*serviceProtocol);
    }
    if (serviceTimeout) {
      res["ServiceTimeout"] = boost::any(*serviceTimeout);
    }
    if (systemParameters) {
      res["SystemParameters"] = boost::any(*systemParameters);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("AuthType") != m.end() && !m["AuthType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["AuthType"]));
    }
    if (m.find("BodyFormat") != m.end() && !m["BodyFormat"].empty()) {
      bodyFormat = make_shared<string>(boost::any_cast<string>(m["BodyFormat"]));
    }
    if (m.find("ConstantParameters") != m.end() && !m["ConstantParameters"].empty()) {
      constantParameters = make_shared<string>(boost::any_cast<string>(m["ConstantParameters"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("HttpMethod") != m.end() && !m["HttpMethod"].empty()) {
      httpMethod = make_shared<string>(boost::any_cast<string>(m["HttpMethod"]));
    }
    if (m.find("HttpProtocol") != m.end() && !m["HttpProtocol"].empty()) {
      httpProtocol = make_shared<string>(boost::any_cast<string>(m["HttpProtocol"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("PathParameters") != m.end() && !m["PathParameters"].empty()) {
      pathParameters = make_shared<string>(boost::any_cast<string>(m["PathParameters"]));
    }
    if (m.find("PostBodyDescription") != m.end() && !m["PostBodyDescription"].empty()) {
      postBodyDescription = make_shared<string>(boost::any_cast<string>(m["PostBodyDescription"]));
    }
    if (m.find("PostBodyType") != m.end() && !m["PostBodyType"].empty()) {
      postBodyType = make_shared<string>(boost::any_cast<string>(m["PostBodyType"]));
    }
    if (m.find("RequestBody") != m.end() && !m["RequestBody"].empty()) {
      requestBody = make_shared<string>(boost::any_cast<string>(m["RequestBody"]));
    }
    if (m.find("RequestHeaders") != m.end() && !m["RequestHeaders"].empty()) {
      requestHeaders = make_shared<string>(boost::any_cast<string>(m["RequestHeaders"]));
    }
    if (m.find("RequestQueries") != m.end() && !m["RequestQueries"].empty()) {
      requestQueries = make_shared<string>(boost::any_cast<string>(m["RequestQueries"]));
    }
    if (m.find("ResultSample") != m.end() && !m["ResultSample"].empty()) {
      resultSample = make_shared<string>(boost::any_cast<string>(m["ResultSample"]));
    }
    if (m.find("ResultType") != m.end() && !m["ResultType"].empty()) {
      resultType = make_shared<string>(boost::any_cast<string>(m["ResultType"]));
    }
    if (m.find("ServiceAddress") != m.end() && !m["ServiceAddress"].empty()) {
      serviceAddress = make_shared<string>(boost::any_cast<string>(m["ServiceAddress"]));
    }
    if (m.find("ServiceProtocol") != m.end() && !m["ServiceProtocol"].empty()) {
      serviceProtocol = make_shared<string>(boost::any_cast<string>(m["ServiceProtocol"]));
    }
    if (m.find("ServiceTimeout") != m.end() && !m["ServiceTimeout"].empty()) {
      serviceTimeout = make_shared<long>(boost::any_cast<long>(m["ServiceTimeout"]));
    }
    if (m.find("SystemParameters") != m.end() && !m["SystemParameters"].empty()) {
      systemParameters = make_shared<string>(boost::any_cast<string>(m["SystemParameters"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~ModifyApiRequest() = default;
};
class ModifyApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyApiResponseBody() {}

  explicit ModifyApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyApiResponseBody() = default;
};
class ModifyApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyApiResponseBody> body{};

  ModifyApiResponse() {}

  explicit ModifyApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyApiResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyApiResponse() = default;
};
class ModifyApiForInnerRequest : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> apiId{};
  shared_ptr<string> apiName{};
  shared_ptr<string> authType{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> requestConfig{};
  shared_ptr<string> requestParamters{};
  shared_ptr<string> resultSample{};
  shared_ptr<string> resultType{};
  shared_ptr<string> serviceConfig{};
  shared_ptr<string> serviceParameters{};
  shared_ptr<string> serviceParametersMap{};
  shared_ptr<string> visibility{};

  ModifyApiForInnerRequest() {}

  explicit ModifyApiForInnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (apiName) {
      res["ApiName"] = boost::any(*apiName);
    }
    if (authType) {
      res["AuthType"] = boost::any(*authType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (requestConfig) {
      res["RequestConfig"] = boost::any(*requestConfig);
    }
    if (requestParamters) {
      res["RequestParamters"] = boost::any(*requestParamters);
    }
    if (resultSample) {
      res["ResultSample"] = boost::any(*resultSample);
    }
    if (resultType) {
      res["ResultType"] = boost::any(*resultType);
    }
    if (serviceConfig) {
      res["ServiceConfig"] = boost::any(*serviceConfig);
    }
    if (serviceParameters) {
      res["ServiceParameters"] = boost::any(*serviceParameters);
    }
    if (serviceParametersMap) {
      res["ServiceParametersMap"] = boost::any(*serviceParametersMap);
    }
    if (visibility) {
      res["Visibility"] = boost::any(*visibility);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("ApiName") != m.end() && !m["ApiName"].empty()) {
      apiName = make_shared<string>(boost::any_cast<string>(m["ApiName"]));
    }
    if (m.find("AuthType") != m.end() && !m["AuthType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["AuthType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("RequestConfig") != m.end() && !m["RequestConfig"].empty()) {
      requestConfig = make_shared<string>(boost::any_cast<string>(m["RequestConfig"]));
    }
    if (m.find("RequestParamters") != m.end() && !m["RequestParamters"].empty()) {
      requestParamters = make_shared<string>(boost::any_cast<string>(m["RequestParamters"]));
    }
    if (m.find("ResultSample") != m.end() && !m["ResultSample"].empty()) {
      resultSample = make_shared<string>(boost::any_cast<string>(m["ResultSample"]));
    }
    if (m.find("ResultType") != m.end() && !m["ResultType"].empty()) {
      resultType = make_shared<string>(boost::any_cast<string>(m["ResultType"]));
    }
    if (m.find("ServiceConfig") != m.end() && !m["ServiceConfig"].empty()) {
      serviceConfig = make_shared<string>(boost::any_cast<string>(m["ServiceConfig"]));
    }
    if (m.find("ServiceParameters") != m.end() && !m["ServiceParameters"].empty()) {
      serviceParameters = make_shared<string>(boost::any_cast<string>(m["ServiceParameters"]));
    }
    if (m.find("ServiceParametersMap") != m.end() && !m["ServiceParametersMap"].empty()) {
      serviceParametersMap = make_shared<string>(boost::any_cast<string>(m["ServiceParametersMap"]));
    }
    if (m.find("Visibility") != m.end() && !m["Visibility"].empty()) {
      visibility = make_shared<string>(boost::any_cast<string>(m["Visibility"]));
    }
  }


  virtual ~ModifyApiForInnerRequest() = default;
};
class ModifyApiForInnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyApiForInnerResponseBody() {}

  explicit ModifyApiForInnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyApiForInnerResponseBody() = default;
};
class ModifyApiForInnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyApiForInnerResponseBody> body{};

  ModifyApiForInnerResponse() {}

  explicit ModifyApiForInnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyApiForInnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyApiForInnerResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyApiForInnerResponse() = default;
};
class ModifyApiGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};

  ModifyApiGroupRequest() {}

  explicit ModifyApiGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~ModifyApiGroupRequest() = default;
};
class ModifyApiGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> groupName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subDomain{};

  ModifyApiGroupResponseBody() {}

  explicit ModifyApiGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subDomain) {
      res["SubDomain"] = boost::any(*subDomain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubDomain") != m.end() && !m["SubDomain"].empty()) {
      subDomain = make_shared<string>(boost::any_cast<string>(m["SubDomain"]));
    }
  }


  virtual ~ModifyApiGroupResponseBody() = default;
};
class ModifyApiGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyApiGroupResponseBody> body{};

  ModifyApiGroupResponse() {}

  explicit ModifyApiGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyApiGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyApiGroupResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyApiGroupResponse() = default;
};
class ModifyApiMarketInstanceAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliUid{};
  shared_ptr<string> groupId{};
  shared_ptr<string> instanceAttributes{};

  ModifyApiMarketInstanceAttributeRequest() {}

  explicit ModifyApiMarketInstanceAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (instanceAttributes) {
      res["InstanceAttributes"] = boost::any(*instanceAttributes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("InstanceAttributes") != m.end() && !m["InstanceAttributes"].empty()) {
      instanceAttributes = make_shared<string>(boost::any_cast<string>(m["InstanceAttributes"]));
    }
  }


  virtual ~ModifyApiMarketInstanceAttributeRequest() = default;
};
class ModifyApiMarketInstanceAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyApiMarketInstanceAttributeResponseBody() {}

  explicit ModifyApiMarketInstanceAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyApiMarketInstanceAttributeResponseBody() = default;
};
class ModifyApiMarketInstanceAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyApiMarketInstanceAttributeResponseBody> body{};

  ModifyApiMarketInstanceAttributeResponse() {}

  explicit ModifyApiMarketInstanceAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyApiMarketInstanceAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyApiMarketInstanceAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyApiMarketInstanceAttributeResponse() = default;
};
class ModifyAppRequest : public Darabonba::Model {
public:
  shared_ptr<long> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> description{};

  ModifyAppRequest() {}

  explicit ModifyAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~ModifyAppRequest() = default;
};
class ModifyAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAppResponseBody() {}

  explicit ModifyAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyAppResponseBody() = default;
};
class ModifyAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAppResponseBody> body{};

  ModifyAppResponse() {}

  explicit ModifyAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAppResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAppResponse() = default;
};
class ModifyAppForInnerRequest : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<long> appId{};
  shared_ptr<string> appName{};
  shared_ptr<string> description{};
  shared_ptr<string> extend{};

  ModifyAppForInnerRequest() {}

  explicit ModifyAppForInnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (extend) {
      res["Extend"] = boost::any(*extend);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Extend") != m.end() && !m["Extend"].empty()) {
      extend = make_shared<string>(boost::any_cast<string>(m["Extend"]));
    }
  }


  virtual ~ModifyAppForInnerRequest() = default;
};
class ModifyAppForInnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyAppForInnerResponseBody() {}

  explicit ModifyAppForInnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyAppForInnerResponseBody() = default;
};
class ModifyAppForInnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAppForInnerResponseBody> body{};

  ModifyAppForInnerResponse() {}

  explicit ModifyAppForInnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyAppForInnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAppForInnerResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAppForInnerResponse() = default;
};
class ModifyGroupAuthAppCodeForBackendRequest : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> authAppCode{};
  shared_ptr<string> groupId{};

  ModifyGroupAuthAppCodeForBackendRequest() {}

  explicit ModifyGroupAuthAppCodeForBackendRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (authAppCode) {
      res["AuthAppCode"] = boost::any(*authAppCode);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("AuthAppCode") != m.end() && !m["AuthAppCode"].empty()) {
      authAppCode = make_shared<string>(boost::any_cast<string>(m["AuthAppCode"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
  }


  virtual ~ModifyGroupAuthAppCodeForBackendRequest() = default;
};
class ModifyGroupAuthAppCodeForBackendResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyGroupAuthAppCodeForBackendResponseBody() {}

  explicit ModifyGroupAuthAppCodeForBackendResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyGroupAuthAppCodeForBackendResponseBody() = default;
};
class ModifyGroupAuthAppCodeForBackendResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyGroupAuthAppCodeForBackendResponseBody> body{};

  ModifyGroupAuthAppCodeForBackendResponse() {}

  explicit ModifyGroupAuthAppCodeForBackendResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyGroupAuthAppCodeForBackendResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyGroupAuthAppCodeForBackendResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyGroupAuthAppCodeForBackendResponse() = default;
};
class ModifySecretKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> secretKey{};
  shared_ptr<string> secretKeyId{};
  shared_ptr<string> secretKeyName{};
  shared_ptr<string> secretValue{};

  ModifySecretKeyRequest() {}

  explicit ModifySecretKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (secretKey) {
      res["SecretKey"] = boost::any(*secretKey);
    }
    if (secretKeyId) {
      res["SecretKeyId"] = boost::any(*secretKeyId);
    }
    if (secretKeyName) {
      res["SecretKeyName"] = boost::any(*secretKeyName);
    }
    if (secretValue) {
      res["SecretValue"] = boost::any(*secretValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecretKey") != m.end() && !m["SecretKey"].empty()) {
      secretKey = make_shared<string>(boost::any_cast<string>(m["SecretKey"]));
    }
    if (m.find("SecretKeyId") != m.end() && !m["SecretKeyId"].empty()) {
      secretKeyId = make_shared<string>(boost::any_cast<string>(m["SecretKeyId"]));
    }
    if (m.find("SecretKeyName") != m.end() && !m["SecretKeyName"].empty()) {
      secretKeyName = make_shared<string>(boost::any_cast<string>(m["SecretKeyName"]));
    }
    if (m.find("SecretValue") != m.end() && !m["SecretValue"].empty()) {
      secretValue = make_shared<string>(boost::any_cast<string>(m["SecretValue"]));
    }
  }


  virtual ~ModifySecretKeyRequest() = default;
};
class ModifySecretKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> secretKeyId{};
  shared_ptr<string> secretKeyName{};

  ModifySecretKeyResponseBody() {}

  explicit ModifySecretKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (secretKeyId) {
      res["SecretKeyId"] = boost::any(*secretKeyId);
    }
    if (secretKeyName) {
      res["SecretKeyName"] = boost::any(*secretKeyName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecretKeyId") != m.end() && !m["SecretKeyId"].empty()) {
      secretKeyId = make_shared<string>(boost::any_cast<string>(m["SecretKeyId"]));
    }
    if (m.find("SecretKeyName") != m.end() && !m["SecretKeyName"].empty()) {
      secretKeyName = make_shared<string>(boost::any_cast<string>(m["SecretKeyName"]));
    }
  }


  virtual ~ModifySecretKeyResponseBody() = default;
};
class ModifySecretKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifySecretKeyResponseBody> body{};

  ModifySecretKeyResponse() {}

  explicit ModifySecretKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifySecretKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifySecretKeyResponseBody>(model1);
      }
    }
  }


  virtual ~ModifySecretKeyResponse() = default;
};
class ModifyTrafficControlRequest : public Darabonba::Model {
public:
  shared_ptr<long> apiDefault{};
  shared_ptr<long> appDefault{};
  shared_ptr<string> description{};
  shared_ptr<string> trafficControlId{};
  shared_ptr<string> trafficControlName{};
  shared_ptr<string> trafficControlUnit{};
  shared_ptr<long> userDefault{};

  ModifyTrafficControlRequest() {}

  explicit ModifyTrafficControlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiDefault) {
      res["ApiDefault"] = boost::any(*apiDefault);
    }
    if (appDefault) {
      res["AppDefault"] = boost::any(*appDefault);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (trafficControlId) {
      res["TrafficControlId"] = boost::any(*trafficControlId);
    }
    if (trafficControlName) {
      res["TrafficControlName"] = boost::any(*trafficControlName);
    }
    if (trafficControlUnit) {
      res["TrafficControlUnit"] = boost::any(*trafficControlUnit);
    }
    if (userDefault) {
      res["UserDefault"] = boost::any(*userDefault);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiDefault") != m.end() && !m["ApiDefault"].empty()) {
      apiDefault = make_shared<long>(boost::any_cast<long>(m["ApiDefault"]));
    }
    if (m.find("AppDefault") != m.end() && !m["AppDefault"].empty()) {
      appDefault = make_shared<long>(boost::any_cast<long>(m["AppDefault"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("TrafficControlId") != m.end() && !m["TrafficControlId"].empty()) {
      trafficControlId = make_shared<string>(boost::any_cast<string>(m["TrafficControlId"]));
    }
    if (m.find("TrafficControlName") != m.end() && !m["TrafficControlName"].empty()) {
      trafficControlName = make_shared<string>(boost::any_cast<string>(m["TrafficControlName"]));
    }
    if (m.find("TrafficControlUnit") != m.end() && !m["TrafficControlUnit"].empty()) {
      trafficControlUnit = make_shared<string>(boost::any_cast<string>(m["TrafficControlUnit"]));
    }
    if (m.find("UserDefault") != m.end() && !m["UserDefault"].empty()) {
      userDefault = make_shared<long>(boost::any_cast<long>(m["UserDefault"]));
    }
  }


  virtual ~ModifyTrafficControlRequest() = default;
};
class ModifyTrafficControlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyTrafficControlResponseBody() {}

  explicit ModifyTrafficControlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyTrafficControlResponseBody() = default;
};
class ModifyTrafficControlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyTrafficControlResponseBody> body{};

  ModifyTrafficControlResponse() {}

  explicit ModifyTrafficControlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyTrafficControlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyTrafficControlResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyTrafficControlResponse() = default;
};
class ModifyUserWhiteListValueByTypeRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> type{};
  shared_ptr<long> uid{};
  shared_ptr<string> value{};

  ModifyUserWhiteListValueByTypeRequest() {}

  explicit ModifyUserWhiteListValueByTypeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<long>(boost::any_cast<long>(m["Uid"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ModifyUserWhiteListValueByTypeRequest() = default;
};
class ModifyUserWhiteListValueByTypeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyUserWhiteListValueByTypeResponseBody() {}

  explicit ModifyUserWhiteListValueByTypeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyUserWhiteListValueByTypeResponseBody() = default;
};
class ModifyUserWhiteListValueByTypeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyUserWhiteListValueByTypeResponseBody> body{};

  ModifyUserWhiteListValueByTypeResponse() {}

  explicit ModifyUserWhiteListValueByTypeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ModifyUserWhiteListValueByTypeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyUserWhiteListValueByTypeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyUserWhiteListValueByTypeResponse() = default;
};
class ReactivateDomainForBackendRequest : public Darabonba::Model {
public:
  shared_ptr<long> aliuid{};
  shared_ptr<string> domainName{};
  shared_ptr<string> groupId{};

  ReactivateDomainForBackendRequest() {}

  explicit ReactivateDomainForBackendRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliuid) {
      res["Aliuid"] = boost::any(*aliuid);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Aliuid") != m.end() && !m["Aliuid"].empty()) {
      aliuid = make_shared<long>(boost::any_cast<long>(m["Aliuid"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
  }


  virtual ~ReactivateDomainForBackendRequest() = default;
};
class ReactivateDomainForBackendResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ReactivateDomainForBackendResponseBody() {}

  explicit ReactivateDomainForBackendResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ReactivateDomainForBackendResponseBody() = default;
};
class ReactivateDomainForBackendResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReactivateDomainForBackendResponseBody> body{};

  ReactivateDomainForBackendResponse() {}

  explicit ReactivateDomainForBackendResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ReactivateDomainForBackendResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReactivateDomainForBackendResponseBody>(model1);
      }
    }
  }


  virtual ~ReactivateDomainForBackendResponse() = default;
};
class RecoverApiFromHistoricalRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> groupId{};
  shared_ptr<string> historyVersion{};
  shared_ptr<string> stageName{};

  RecoverApiFromHistoricalRequest() {}

  explicit RecoverApiFromHistoricalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (historyVersion) {
      res["HistoryVersion"] = boost::any(*historyVersion);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("HistoryVersion") != m.end() && !m["HistoryVersion"].empty()) {
      historyVersion = make_shared<string>(boost::any_cast<string>(m["HistoryVersion"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~RecoverApiFromHistoricalRequest() = default;
};
class RecoverApiFromHistoricalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RecoverApiFromHistoricalResponseBody() {}

  explicit RecoverApiFromHistoricalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecoverApiFromHistoricalResponseBody() = default;
};
class RecoverApiFromHistoricalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecoverApiFromHistoricalResponseBody> body{};

  RecoverApiFromHistoricalResponse() {}

  explicit RecoverApiFromHistoricalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RecoverApiFromHistoricalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecoverApiFromHistoricalResponseBody>(model1);
      }
    }
  }


  virtual ~RecoverApiFromHistoricalResponse() = default;
};
class RecoveryApiDefineFromHistoricalRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> groupId{};
  shared_ptr<string> historyVersion{};
  shared_ptr<string> stageName{};

  RecoveryApiDefineFromHistoricalRequest() {}

  explicit RecoveryApiDefineFromHistoricalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (historyVersion) {
      res["HistoryVersion"] = boost::any(*historyVersion);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("HistoryVersion") != m.end() && !m["HistoryVersion"].empty()) {
      historyVersion = make_shared<string>(boost::any_cast<string>(m["HistoryVersion"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~RecoveryApiDefineFromHistoricalRequest() = default;
};
class RecoveryApiDefineFromHistoricalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RecoveryApiDefineFromHistoricalResponseBody() {}

  explicit RecoveryApiDefineFromHistoricalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecoveryApiDefineFromHistoricalResponseBody() = default;
};
class RecoveryApiDefineFromHistoricalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecoveryApiDefineFromHistoricalResponseBody> body{};

  RecoveryApiDefineFromHistoricalResponse() {}

  explicit RecoveryApiDefineFromHistoricalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RecoveryApiDefineFromHistoricalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecoveryApiDefineFromHistoricalResponseBody>(model1);
      }
    }
  }


  virtual ~RecoveryApiDefineFromHistoricalResponse() = default;
};
class RecoveryApiFromHistoricalRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> groupId{};
  shared_ptr<string> historyVersion{};
  shared_ptr<string> stageName{};

  RecoveryApiFromHistoricalRequest() {}

  explicit RecoveryApiFromHistoricalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (historyVersion) {
      res["HistoryVersion"] = boost::any(*historyVersion);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("HistoryVersion") != m.end() && !m["HistoryVersion"].empty()) {
      historyVersion = make_shared<string>(boost::any_cast<string>(m["HistoryVersion"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~RecoveryApiFromHistoricalRequest() = default;
};
class RecoveryApiFromHistoricalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RecoveryApiFromHistoricalResponseBody() {}

  explicit RecoveryApiFromHistoricalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RecoveryApiFromHistoricalResponseBody() = default;
};
class RecoveryApiFromHistoricalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RecoveryApiFromHistoricalResponseBody> body{};

  RecoveryApiFromHistoricalResponse() {}

  explicit RecoveryApiFromHistoricalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RecoveryApiFromHistoricalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RecoveryApiFromHistoricalResponseBody>(model1);
      }
    }
  }


  virtual ~RecoveryApiFromHistoricalResponse() = default;
};
class RefreshDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> groupId{};

  RefreshDomainRequest() {}

  explicit RefreshDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
  }


  virtual ~RefreshDomainRequest() = default;
};
class RefreshDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> certificateId{};
  shared_ptr<string> certificateName{};
  shared_ptr<string> domainName{};
  shared_ptr<string> domainNameResolution{};
  shared_ptr<string> domainStatus{};
  shared_ptr<string> groupId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subDomain{};

  RefreshDomainResponseBody() {}

  explicit RefreshDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateId) {
      res["CertificateId"] = boost::any(*certificateId);
    }
    if (certificateName) {
      res["CertificateName"] = boost::any(*certificateName);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainNameResolution) {
      res["DomainNameResolution"] = boost::any(*domainNameResolution);
    }
    if (domainStatus) {
      res["DomainStatus"] = boost::any(*domainStatus);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subDomain) {
      res["SubDomain"] = boost::any(*subDomain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateId") != m.end() && !m["CertificateId"].empty()) {
      certificateId = make_shared<string>(boost::any_cast<string>(m["CertificateId"]));
    }
    if (m.find("CertificateName") != m.end() && !m["CertificateName"].empty()) {
      certificateName = make_shared<string>(boost::any_cast<string>(m["CertificateName"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DomainNameResolution") != m.end() && !m["DomainNameResolution"].empty()) {
      domainNameResolution = make_shared<string>(boost::any_cast<string>(m["DomainNameResolution"]));
    }
    if (m.find("DomainStatus") != m.end() && !m["DomainStatus"].empty()) {
      domainStatus = make_shared<string>(boost::any_cast<string>(m["DomainStatus"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubDomain") != m.end() && !m["SubDomain"].empty()) {
      subDomain = make_shared<string>(boost::any_cast<string>(m["SubDomain"]));
    }
  }


  virtual ~RefreshDomainResponseBody() = default;
};
class RefreshDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RefreshDomainResponseBody> body{};

  RefreshDomainResponse() {}

  explicit RefreshDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RefreshDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefreshDomainResponseBody>(model1);
      }
    }
  }


  virtual ~RefreshDomainResponse() = default;
};
class RemoveAccessPermissionByApisRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiIds{};
  shared_ptr<long> appId{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> stageName{};

  RemoveAccessPermissionByApisRequest() {}

  explicit RemoveAccessPermissionByApisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiIds) {
      res["ApiIds"] = boost::any(*apiIds);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiIds") != m.end() && !m["ApiIds"].empty()) {
      apiIds = make_shared<string>(boost::any_cast<string>(m["ApiIds"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~RemoveAccessPermissionByApisRequest() = default;
};
class RemoveAccessPermissionByApisResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveAccessPermissionByApisResponseBody() {}

  explicit RemoveAccessPermissionByApisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RemoveAccessPermissionByApisResponseBody() = default;
};
class RemoveAccessPermissionByApisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveAccessPermissionByApisResponseBody> body{};

  RemoveAccessPermissionByApisResponse() {}

  explicit RemoveAccessPermissionByApisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveAccessPermissionByApisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveAccessPermissionByApisResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveAccessPermissionByApisResponse() = default;
};
class RemoveAccessPermissionByAppsRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> appIds{};
  shared_ptr<string> groupId{};
  shared_ptr<string> stageName{};

  RemoveAccessPermissionByAppsRequest() {}

  explicit RemoveAccessPermissionByAppsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (appIds) {
      res["AppIds"] = boost::any(*appIds);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("AppIds") != m.end() && !m["AppIds"].empty()) {
      appIds = make_shared<string>(boost::any_cast<string>(m["AppIds"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~RemoveAccessPermissionByAppsRequest() = default;
};
class RemoveAccessPermissionByAppsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveAccessPermissionByAppsResponseBody() {}

  explicit RemoveAccessPermissionByAppsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RemoveAccessPermissionByAppsResponseBody() = default;
};
class RemoveAccessPermissionByAppsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveAccessPermissionByAppsResponseBody> body{};

  RemoveAccessPermissionByAppsResponse() {}

  explicit RemoveAccessPermissionByAppsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveAccessPermissionByAppsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveAccessPermissionByAppsResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveAccessPermissionByAppsResponse() = default;
};
class RemoveAccessPermissionByAppsForInnerRequest : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> apiId{};
  shared_ptr<string> appIds{};
  shared_ptr<string> groupId{};
  shared_ptr<string> source{};
  shared_ptr<string> stageName{};

  RemoveAccessPermissionByAppsForInnerRequest() {}

  explicit RemoveAccessPermissionByAppsForInnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (appIds) {
      res["AppIds"] = boost::any(*appIds);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("AppIds") != m.end() && !m["AppIds"].empty()) {
      appIds = make_shared<string>(boost::any_cast<string>(m["AppIds"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~RemoveAccessPermissionByAppsForInnerRequest() = default;
};
class RemoveAccessPermissionByAppsForInnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveAccessPermissionByAppsForInnerResponseBody() {}

  explicit RemoveAccessPermissionByAppsForInnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RemoveAccessPermissionByAppsForInnerResponseBody() = default;
};
class RemoveAccessPermissionByAppsForInnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveAccessPermissionByAppsForInnerResponseBody> body{};

  RemoveAccessPermissionByAppsForInnerResponse() {}

  explicit RemoveAccessPermissionByAppsForInnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveAccessPermissionByAppsForInnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveAccessPermissionByAppsForInnerResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveAccessPermissionByAppsForInnerResponse() = default;
};
class RemoveAllBlackListRequest : public Darabonba::Model {
public:
  shared_ptr<string> blackType{};

  RemoveAllBlackListRequest() {}

  explicit RemoveAllBlackListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blackType) {
      res["BlackType"] = boost::any(*blackType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlackType") != m.end() && !m["BlackType"].empty()) {
      blackType = make_shared<string>(boost::any_cast<string>(m["BlackType"]));
    }
  }


  virtual ~RemoveAllBlackListRequest() = default;
};
class RemoveAllBlackListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveAllBlackListResponseBody() {}

  explicit RemoveAllBlackListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RemoveAllBlackListResponseBody() = default;
};
class RemoveAllBlackListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveAllBlackListResponseBody> body{};

  RemoveAllBlackListResponse() {}

  explicit RemoveAllBlackListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveAllBlackListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveAllBlackListResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveAllBlackListResponse() = default;
};
class RemoveApiRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiIds{};
  shared_ptr<string> groupId{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleType{};
  shared_ptr<string> stageName{};

  RemoveApiRuleRequest() {}

  explicit RemoveApiRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiIds) {
      res["ApiIds"] = boost::any(*apiIds);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiIds") != m.end() && !m["ApiIds"].empty()) {
      apiIds = make_shared<string>(boost::any_cast<string>(m["ApiIds"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~RemoveApiRuleRequest() = default;
};
class RemoveApiRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveApiRuleResponseBody() {}

  explicit RemoveApiRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RemoveApiRuleResponseBody() = default;
};
class RemoveApiRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveApiRuleResponseBody> body{};

  RemoveApiRuleResponse() {}

  explicit RemoveApiRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveApiRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveApiRuleResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveApiRuleResponse() = default;
};
class RemoveAppsFromApiRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> appIds{};
  shared_ptr<string> groupId{};
  shared_ptr<string> stageName{};

  RemoveAppsFromApiRequest() {}

  explicit RemoveAppsFromApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (appIds) {
      res["AppIds"] = boost::any(*appIds);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("AppIds") != m.end() && !m["AppIds"].empty()) {
      appIds = make_shared<string>(boost::any_cast<string>(m["AppIds"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~RemoveAppsFromApiRequest() = default;
};
class RemoveAppsFromApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveAppsFromApiResponseBody() {}

  explicit RemoveAppsFromApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RemoveAppsFromApiResponseBody() = default;
};
class RemoveAppsFromApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveAppsFromApiResponseBody> body{};

  RemoveAppsFromApiResponse() {}

  explicit RemoveAppsFromApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveAppsFromApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveAppsFromApiResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveAppsFromApiResponse() = default;
};
class RemoveBlackListRequest : public Darabonba::Model {
public:
  shared_ptr<string> blackContent{};
  shared_ptr<string> blackType{};

  RemoveBlackListRequest() {}

  explicit RemoveBlackListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blackContent) {
      res["BlackContent"] = boost::any(*blackContent);
    }
    if (blackType) {
      res["BlackType"] = boost::any(*blackType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlackContent") != m.end() && !m["BlackContent"].empty()) {
      blackContent = make_shared<string>(boost::any_cast<string>(m["BlackContent"]));
    }
    if (m.find("BlackType") != m.end() && !m["BlackType"].empty()) {
      blackType = make_shared<string>(boost::any_cast<string>(m["BlackType"]));
    }
  }


  virtual ~RemoveBlackListRequest() = default;
};
class RemoveBlackListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveBlackListResponseBody() {}

  explicit RemoveBlackListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RemoveBlackListResponseBody() = default;
};
class RemoveBlackListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveBlackListResponseBody> body{};

  RemoveBlackListResponse() {}

  explicit RemoveBlackListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveBlackListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveBlackListResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveBlackListResponse() = default;
};
class ResetAppCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> appCode{};

  ResetAppCodeRequest() {}

  explicit ResetAppCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appCode) {
      res["AppCode"] = boost::any(*appCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppCode") != m.end() && !m["AppCode"].empty()) {
      appCode = make_shared<string>(boost::any_cast<string>(m["AppCode"]));
    }
  }


  virtual ~ResetAppCodeRequest() = default;
};
class ResetAppCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResetAppCodeResponseBody() {}

  explicit ResetAppCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ResetAppCodeResponseBody() = default;
};
class ResetAppCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetAppCodeResponseBody> body{};

  ResetAppCodeResponse() {}

  explicit ResetAppCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ResetAppCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetAppCodeResponseBody>(model1);
      }
    }
  }


  virtual ~ResetAppCodeResponse() = default;
};
class ResetAppCodeForInnerRequest : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> appCode{};
  shared_ptr<string> newAppCode{};

  ResetAppCodeForInnerRequest() {}

  explicit ResetAppCodeForInnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (appCode) {
      res["AppCode"] = boost::any(*appCode);
    }
    if (newAppCode) {
      res["NewAppCode"] = boost::any(*newAppCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("AppCode") != m.end() && !m["AppCode"].empty()) {
      appCode = make_shared<string>(boost::any_cast<string>(m["AppCode"]));
    }
    if (m.find("NewAppCode") != m.end() && !m["NewAppCode"].empty()) {
      newAppCode = make_shared<string>(boost::any_cast<string>(m["NewAppCode"]));
    }
  }


  virtual ~ResetAppCodeForInnerRequest() = default;
};
class ResetAppCodeForInnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResetAppCodeForInnerResponseBody() {}

  explicit ResetAppCodeForInnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ResetAppCodeForInnerResponseBody() = default;
};
class ResetAppCodeForInnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetAppCodeForInnerResponseBody> body{};

  ResetAppCodeForInnerResponse() {}

  explicit ResetAppCodeForInnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ResetAppCodeForInnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetAppCodeForInnerResponseBody>(model1);
      }
    }
  }


  virtual ~ResetAppCodeForInnerResponse() = default;
};
class ResetAppKeySecretRequest : public Darabonba::Model {
public:
  shared_ptr<string> appKey{};

  ResetAppKeySecretRequest() {}

  explicit ResetAppKeySecretRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
  }


  virtual ~ResetAppKeySecretRequest() = default;
};
class ResetAppKeySecretResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResetAppKeySecretResponseBody() {}

  explicit ResetAppKeySecretResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ResetAppKeySecretResponseBody() = default;
};
class ResetAppKeySecretResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetAppKeySecretResponseBody> body{};

  ResetAppKeySecretResponse() {}

  explicit ResetAppKeySecretResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ResetAppKeySecretResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetAppKeySecretResponseBody>(model1);
      }
    }
  }


  virtual ~ResetAppKeySecretResponse() = default;
};
class ResetSecretByAppKeyForInnerRequest : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> appKey{};
  shared_ptr<string> newAppKey{};
  shared_ptr<string> newAppSecret{};

  ResetSecretByAppKeyForInnerRequest() {}

  explicit ResetSecretByAppKeyForInnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (newAppKey) {
      res["NewAppKey"] = boost::any(*newAppKey);
    }
    if (newAppSecret) {
      res["NewAppSecret"] = boost::any(*newAppSecret);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("NewAppKey") != m.end() && !m["NewAppKey"].empty()) {
      newAppKey = make_shared<string>(boost::any_cast<string>(m["NewAppKey"]));
    }
    if (m.find("NewAppSecret") != m.end() && !m["NewAppSecret"].empty()) {
      newAppSecret = make_shared<string>(boost::any_cast<string>(m["NewAppSecret"]));
    }
  }


  virtual ~ResetSecretByAppKeyForInnerRequest() = default;
};
class ResetSecretByAppKeyForInnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResetSecretByAppKeyForInnerResponseBody() {}

  explicit ResetSecretByAppKeyForInnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ResetSecretByAppKeyForInnerResponseBody() = default;
};
class ResetSecretByAppKeyForInnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetSecretByAppKeyForInnerResponseBody> body{};

  ResetSecretByAppKeyForInnerResponse() {}

  explicit ResetSecretByAppKeyForInnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ResetSecretByAppKeyForInnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetSecretByAppKeyForInnerResponseBody>(model1);
      }
    }
  }


  virtual ~ResetSecretByAppKeyForInnerResponse() = default;
};
class SetAccessPermissionByApisRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiIds{};
  shared_ptr<long> appId{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> stageName{};

  SetAccessPermissionByApisRequest() {}

  explicit SetAccessPermissionByApisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiIds) {
      res["ApiIds"] = boost::any(*apiIds);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiIds") != m.end() && !m["ApiIds"].empty()) {
      apiIds = make_shared<string>(boost::any_cast<string>(m["ApiIds"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~SetAccessPermissionByApisRequest() = default;
};
class SetAccessPermissionByApisResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetAccessPermissionByApisResponseBody() {}

  explicit SetAccessPermissionByApisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetAccessPermissionByApisResponseBody() = default;
};
class SetAccessPermissionByApisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetAccessPermissionByApisResponseBody> body{};

  SetAccessPermissionByApisResponse() {}

  explicit SetAccessPermissionByApisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetAccessPermissionByApisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetAccessPermissionByApisResponseBody>(model1);
      }
    }
  }


  virtual ~SetAccessPermissionByApisResponse() = default;
};
class SetAccessPermissionByGroupForBackendRequest : public Darabonba::Model {
public:
  shared_ptr<long> appId{};
  shared_ptr<string> groupId{};

  SetAccessPermissionByGroupForBackendRequest() {}

  explicit SetAccessPermissionByGroupForBackendRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
  }


  virtual ~SetAccessPermissionByGroupForBackendRequest() = default;
};
class SetAccessPermissionByGroupForBackendResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestId{};

  SetAccessPermissionByGroupForBackendResponseBody() {}

  explicit SetAccessPermissionByGroupForBackendResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetAccessPermissionByGroupForBackendResponseBody() = default;
};
class SetAccessPermissionByGroupForBackendResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetAccessPermissionByGroupForBackendResponseBody> body{};

  SetAccessPermissionByGroupForBackendResponse() {}

  explicit SetAccessPermissionByGroupForBackendResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetAccessPermissionByGroupForBackendResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetAccessPermissionByGroupForBackendResponseBody>(model1);
      }
    }
  }


  virtual ~SetAccessPermissionByGroupForBackendResponse() = default;
};
class SetAccessPermissionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> appIds{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> stageName{};

  SetAccessPermissionsRequest() {}

  explicit SetAccessPermissionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (appIds) {
      res["AppIds"] = boost::any(*appIds);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("AppIds") != m.end() && !m["AppIds"].empty()) {
      appIds = make_shared<string>(boost::any_cast<string>(m["AppIds"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~SetAccessPermissionsRequest() = default;
};
class SetAccessPermissionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetAccessPermissionsResponseBody() {}

  explicit SetAccessPermissionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetAccessPermissionsResponseBody() = default;
};
class SetAccessPermissionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetAccessPermissionsResponseBody> body{};

  SetAccessPermissionsResponse() {}

  explicit SetAccessPermissionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetAccessPermissionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetAccessPermissionsResponseBody>(model1);
      }
    }
  }


  virtual ~SetAccessPermissionsResponse() = default;
};
class SetAccessPermissionsForInnerRequest : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> apiId{};
  shared_ptr<string> appIds{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> source{};
  shared_ptr<string> stageName{};

  SetAccessPermissionsForInnerRequest() {}

  explicit SetAccessPermissionsForInnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (appIds) {
      res["AppIds"] = boost::any(*appIds);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("AppIds") != m.end() && !m["AppIds"].empty()) {
      appIds = make_shared<string>(boost::any_cast<string>(m["AppIds"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~SetAccessPermissionsForInnerRequest() = default;
};
class SetAccessPermissionsForInnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetAccessPermissionsForInnerResponseBody() {}

  explicit SetAccessPermissionsForInnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetAccessPermissionsForInnerResponseBody() = default;
};
class SetAccessPermissionsForInnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetAccessPermissionsForInnerResponseBody> body{};

  SetAccessPermissionsForInnerResponse() {}

  explicit SetAccessPermissionsForInnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetAccessPermissionsForInnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetAccessPermissionsForInnerResponseBody>(model1);
      }
    }
  }


  virtual ~SetAccessPermissionsForInnerResponse() = default;
};
class SetApiRuleRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiIds{};
  shared_ptr<string> groupId{};
  shared_ptr<string> ruleId{};
  shared_ptr<string> ruleType{};
  shared_ptr<string> stageName{};

  SetApiRuleRequest() {}

  explicit SetApiRuleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiIds) {
      res["ApiIds"] = boost::any(*apiIds);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (ruleId) {
      res["RuleId"] = boost::any(*ruleId);
    }
    if (ruleType) {
      res["RuleType"] = boost::any(*ruleType);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiIds") != m.end() && !m["ApiIds"].empty()) {
      apiIds = make_shared<string>(boost::any_cast<string>(m["ApiIds"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("RuleId") != m.end() && !m["RuleId"].empty()) {
      ruleId = make_shared<string>(boost::any_cast<string>(m["RuleId"]));
    }
    if (m.find("RuleType") != m.end() && !m["RuleType"].empty()) {
      ruleType = make_shared<string>(boost::any_cast<string>(m["RuleType"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~SetApiRuleRequest() = default;
};
class SetApiRuleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetApiRuleResponseBody() {}

  explicit SetApiRuleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetApiRuleResponseBody() = default;
};
class SetApiRuleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetApiRuleResponseBody> body{};

  SetApiRuleResponse() {}

  explicit SetApiRuleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetApiRuleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetApiRuleResponseBody>(model1);
      }
    }
  }


  virtual ~SetApiRuleResponse() = default;
};
class SetDomainRequest : public Darabonba::Model {
public:
  shared_ptr<string> certificateBody{};
  shared_ptr<string> certificateName{};
  shared_ptr<string> domainName{};
  shared_ptr<string> groupId{};
  shared_ptr<string> privateKey{};

  SetDomainRequest() {}

  explicit SetDomainRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateBody) {
      res["CertificateBody"] = boost::any(*certificateBody);
    }
    if (certificateName) {
      res["CertificateName"] = boost::any(*certificateName);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (privateKey) {
      res["PrivateKey"] = boost::any(*privateKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateBody") != m.end() && !m["CertificateBody"].empty()) {
      certificateBody = make_shared<string>(boost::any_cast<string>(m["CertificateBody"]));
    }
    if (m.find("CertificateName") != m.end() && !m["CertificateName"].empty()) {
      certificateName = make_shared<string>(boost::any_cast<string>(m["CertificateName"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("PrivateKey") != m.end() && !m["PrivateKey"].empty()) {
      privateKey = make_shared<string>(boost::any_cast<string>(m["PrivateKey"]));
    }
  }


  virtual ~SetDomainRequest() = default;
};
class SetDomainResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> domainName{};
  shared_ptr<string> domainStatus{};
  shared_ptr<string> groupId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subDomain{};

  SetDomainResponseBody() {}

  explicit SetDomainResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (domainStatus) {
      res["DomainStatus"] = boost::any(*domainStatus);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subDomain) {
      res["SubDomain"] = boost::any(*subDomain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("DomainStatus") != m.end() && !m["DomainStatus"].empty()) {
      domainStatus = make_shared<string>(boost::any_cast<string>(m["DomainStatus"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubDomain") != m.end() && !m["SubDomain"].empty()) {
      subDomain = make_shared<string>(boost::any_cast<string>(m["SubDomain"]));
    }
  }


  virtual ~SetDomainResponseBody() = default;
};
class SetDomainResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetDomainResponseBody> body{};

  SetDomainResponse() {}

  explicit SetDomainResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetDomainResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDomainResponseBody>(model1);
      }
    }
  }


  virtual ~SetDomainResponse() = default;
};
class SetDomainCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> certificateBody{};
  shared_ptr<string> certificateName{};
  shared_ptr<string> domainName{};
  shared_ptr<string> groupId{};
  shared_ptr<string> privateKey{};

  SetDomainCertificateRequest() {}

  explicit SetDomainCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateBody) {
      res["CertificateBody"] = boost::any(*certificateBody);
    }
    if (certificateName) {
      res["CertificateName"] = boost::any(*certificateName);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (privateKey) {
      res["PrivateKey"] = boost::any(*privateKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateBody") != m.end() && !m["CertificateBody"].empty()) {
      certificateBody = make_shared<string>(boost::any_cast<string>(m["CertificateBody"]));
    }
    if (m.find("CertificateName") != m.end() && !m["CertificateName"].empty()) {
      certificateName = make_shared<string>(boost::any_cast<string>(m["CertificateName"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("PrivateKey") != m.end() && !m["PrivateKey"].empty()) {
      privateKey = make_shared<string>(boost::any_cast<string>(m["PrivateKey"]));
    }
  }


  virtual ~SetDomainCertificateRequest() = default;
};
class SetDomainCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetDomainCertificateResponseBody() {}

  explicit SetDomainCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetDomainCertificateResponseBody() = default;
};
class SetDomainCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetDomainCertificateResponseBody> body{};

  SetDomainCertificateResponse() {}

  explicit SetDomainCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetDomainCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDomainCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~SetDomainCertificateResponse() = default;
};
class SetDomainForBackendRequest : public Darabonba::Model {
public:
  shared_ptr<string> certificateBody{};
  shared_ptr<string> certificateName{};
  shared_ptr<string> certificatePrivateKey{};
  shared_ptr<string> domainName{};
  shared_ptr<string> groupId{};

  SetDomainForBackendRequest() {}

  explicit SetDomainForBackendRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (certificateBody) {
      res["CertificateBody"] = boost::any(*certificateBody);
    }
    if (certificateName) {
      res["CertificateName"] = boost::any(*certificateName);
    }
    if (certificatePrivateKey) {
      res["CertificatePrivateKey"] = boost::any(*certificatePrivateKey);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CertificateBody") != m.end() && !m["CertificateBody"].empty()) {
      certificateBody = make_shared<string>(boost::any_cast<string>(m["CertificateBody"]));
    }
    if (m.find("CertificateName") != m.end() && !m["CertificateName"].empty()) {
      certificateName = make_shared<string>(boost::any_cast<string>(m["CertificateName"]));
    }
    if (m.find("CertificatePrivateKey") != m.end() && !m["CertificatePrivateKey"].empty()) {
      certificatePrivateKey = make_shared<string>(boost::any_cast<string>(m["CertificatePrivateKey"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
  }


  virtual ~SetDomainForBackendRequest() = default;
};
class SetDomainForBackendResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> domainBindingStatus{};
  shared_ptr<string> domainName{};
  shared_ptr<string> groupId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subDomain{};

  SetDomainForBackendResponseBody() {}

  explicit SetDomainForBackendResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (domainBindingStatus) {
      res["DomainBindingStatus"] = boost::any(*domainBindingStatus);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subDomain) {
      res["SubDomain"] = boost::any(*subDomain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DomainBindingStatus") != m.end() && !m["DomainBindingStatus"].empty()) {
      domainBindingStatus = make_shared<string>(boost::any_cast<string>(m["DomainBindingStatus"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubDomain") != m.end() && !m["SubDomain"].empty()) {
      subDomain = make_shared<string>(boost::any_cast<string>(m["SubDomain"]));
    }
  }


  virtual ~SetDomainForBackendResponseBody() = default;
};
class SetDomainForBackendResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetDomainForBackendResponseBody> body{};

  SetDomainForBackendResponse() {}

  explicit SetDomainForBackendResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetDomainForBackendResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDomainForBackendResponseBody>(model1);
      }
    }
  }


  virtual ~SetDomainForBackendResponse() = default;
};
class SetMockIntegrationRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> groupId{};
  shared_ptr<string> mock{};
  shared_ptr<string> mockResult{};

  SetMockIntegrationRequest() {}

  explicit SetMockIntegrationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (mock) {
      res["Mock"] = boost::any(*mock);
    }
    if (mockResult) {
      res["MockResult"] = boost::any(*mockResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Mock") != m.end() && !m["Mock"].empty()) {
      mock = make_shared<string>(boost::any_cast<string>(m["Mock"]));
    }
    if (m.find("MockResult") != m.end() && !m["MockResult"].empty()) {
      mockResult = make_shared<string>(boost::any_cast<string>(m["MockResult"]));
    }
  }


  virtual ~SetMockIntegrationRequest() = default;
};
class SetMockIntegrationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetMockIntegrationResponseBody() {}

  explicit SetMockIntegrationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetMockIntegrationResponseBody() = default;
};
class SetMockIntegrationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetMockIntegrationResponseBody> body{};

  SetMockIntegrationResponse() {}

  explicit SetMockIntegrationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetMockIntegrationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetMockIntegrationResponseBody>(model1);
      }
    }
  }


  virtual ~SetMockIntegrationResponse() = default;
};
class SetPurchasedApiGroupStatusRequest : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<string> billingStatus{};
  shared_ptr<bool> closeOrder{};
  shared_ptr<string> groupId{};

  SetPurchasedApiGroupStatusRequest() {}

  explicit SetPurchasedApiGroupStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (billingStatus) {
      res["BillingStatus"] = boost::any(*billingStatus);
    }
    if (closeOrder) {
      res["CloseOrder"] = boost::any(*closeOrder);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("BillingStatus") != m.end() && !m["BillingStatus"].empty()) {
      billingStatus = make_shared<string>(boost::any_cast<string>(m["BillingStatus"]));
    }
    if (m.find("CloseOrder") != m.end() && !m["CloseOrder"].empty()) {
      closeOrder = make_shared<bool>(boost::any_cast<bool>(m["CloseOrder"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
  }


  virtual ~SetPurchasedApiGroupStatusRequest() = default;
};
class SetPurchasedApiGroupStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetPurchasedApiGroupStatusResponseBody() {}

  explicit SetPurchasedApiGroupStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetPurchasedApiGroupStatusResponseBody() = default;
};
class SetPurchasedApiGroupStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetPurchasedApiGroupStatusResponseBody> body{};

  SetPurchasedApiGroupStatusResponse() {}

  explicit SetPurchasedApiGroupStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetPurchasedApiGroupStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetPurchasedApiGroupStatusResponseBody>(model1);
      }
    }
  }


  virtual ~SetPurchasedApiGroupStatusResponse() = default;
};
class SwitchApiRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> historyVersion{};
  shared_ptr<string> stageName{};

  SwitchApiRequest() {}

  explicit SwitchApiRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (historyVersion) {
      res["HistoryVersion"] = boost::any(*historyVersion);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("HistoryVersion") != m.end() && !m["HistoryVersion"].empty()) {
      historyVersion = make_shared<string>(boost::any_cast<string>(m["HistoryVersion"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~SwitchApiRequest() = default;
};
class SwitchApiResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SwitchApiResponseBody() {}

  explicit SwitchApiResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SwitchApiResponseBody() = default;
};
class SwitchApiResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SwitchApiResponseBody> body{};

  SwitchApiResponse() {}

  explicit SwitchApiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SwitchApiResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SwitchApiResponseBody>(model1);
      }
    }
  }


  virtual ~SwitchApiResponse() = default;
};
class SwitchApiForInnerRequest : public Darabonba::Model {
public:
  shared_ptr<string> apiId{};
  shared_ptr<string> description{};
  shared_ptr<string> groupId{};
  shared_ptr<string> historyVersion{};
  shared_ptr<string> stageName{};

  SwitchApiForInnerRequest() {}

  explicit SwitchApiForInnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiId) {
      res["ApiId"] = boost::any(*apiId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (historyVersion) {
      res["HistoryVersion"] = boost::any(*historyVersion);
    }
    if (stageName) {
      res["StageName"] = boost::any(*stageName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiId") != m.end() && !m["ApiId"].empty()) {
      apiId = make_shared<string>(boost::any_cast<string>(m["ApiId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("HistoryVersion") != m.end() && !m["HistoryVersion"].empty()) {
      historyVersion = make_shared<string>(boost::any_cast<string>(m["HistoryVersion"]));
    }
    if (m.find("StageName") != m.end() && !m["StageName"].empty()) {
      stageName = make_shared<string>(boost::any_cast<string>(m["StageName"]));
    }
  }


  virtual ~SwitchApiForInnerRequest() = default;
};
class SwitchApiForInnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SwitchApiForInnerResponseBody() {}

  explicit SwitchApiForInnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SwitchApiForInnerResponseBody() = default;
};
class SwitchApiForInnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SwitchApiForInnerResponseBody> body{};

  SwitchApiForInnerResponse() {}

  explicit SwitchApiForInnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SwitchApiForInnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SwitchApiForInnerResponseBody>(model1);
      }
    }
  }


  virtual ~SwitchApiForInnerResponse() = default;
};
class SynCreateAppForInnerRequest : public Darabonba::Model {
public:
  shared_ptr<long> aliUid{};
  shared_ptr<long> appKey{};
  shared_ptr<string> appName{};
  shared_ptr<string> appSecret{};
  shared_ptr<string> description{};
  shared_ptr<string> source{};

  SynCreateAppForInnerRequest() {}

  explicit SynCreateAppForInnerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (appSecret) {
      res["AppSecret"] = boost::any(*appSecret);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<long>(boost::any_cast<long>(m["AliUid"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<long>(boost::any_cast<long>(m["AppKey"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("AppSecret") != m.end() && !m["AppSecret"].empty()) {
      appSecret = make_shared<string>(boost::any_cast<string>(m["AppSecret"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
  }


  virtual ~SynCreateAppForInnerRequest() = default;
};
class SynCreateAppForInnerResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> appId{};
  shared_ptr<string> requestId{};

  SynCreateAppForInnerResponseBody() {}

  explicit SynCreateAppForInnerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<long>(boost::any_cast<long>(m["AppId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SynCreateAppForInnerResponseBody() = default;
};
class SynCreateAppForInnerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SynCreateAppForInnerResponseBody> body{};

  SynCreateAppForInnerResponse() {}

  explicit SynCreateAppForInnerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SynCreateAppForInnerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SynCreateAppForInnerResponseBody>(model1);
      }
    }
  }


  virtual ~SynCreateAppForInnerResponse() = default;
};
class TagResourcesSystemTagsRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  TagResourcesSystemTagsRequestTag() {}

  explicit TagResourcesSystemTagsRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~TagResourcesSystemTagsRequestTag() = default;
};
class TagResourcesSystemTagsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> scope{};
  shared_ptr<string> securityToken{};
  shared_ptr<vector<TagResourcesSystemTagsRequestTag>> tag{};
  shared_ptr<string> tagOwnerBid{};
  shared_ptr<long> tagOwnerUid{};

  TagResourcesSystemTagsRequest() {}

  explicit TagResourcesSystemTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (scope) {
      res["Scope"] = boost::any(*scope);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    if (tagOwnerBid) {
      res["TagOwnerBid"] = boost::any(*tagOwnerBid);
    }
    if (tagOwnerUid) {
      res["TagOwnerUid"] = boost::any(*tagOwnerUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("Scope") != m.end() && !m["Scope"].empty()) {
      scope = make_shared<string>(boost::any_cast<string>(m["Scope"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<TagResourcesSystemTagsRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TagResourcesSystemTagsRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<TagResourcesSystemTagsRequestTag>>(expect1);
      }
    }
    if (m.find("TagOwnerBid") != m.end() && !m["TagOwnerBid"].empty()) {
      tagOwnerBid = make_shared<string>(boost::any_cast<string>(m["TagOwnerBid"]));
    }
    if (m.find("TagOwnerUid") != m.end() && !m["TagOwnerUid"].empty()) {
      tagOwnerUid = make_shared<long>(boost::any_cast<long>(m["TagOwnerUid"]));
    }
  }


  virtual ~TagResourcesSystemTagsRequest() = default;
};
class TagResourcesSystemTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TagResourcesSystemTagsResponseBody() {}

  explicit TagResourcesSystemTagsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TagResourcesSystemTagsResponseBody() = default;
};
class TagResourcesSystemTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TagResourcesSystemTagsResponseBody> body{};

  TagResourcesSystemTagsResponse() {}

  explicit TagResourcesSystemTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TagResourcesSystemTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TagResourcesSystemTagsResponseBody>(model1);
      }
    }
  }


  virtual ~TagResourcesSystemTagsResponse() = default;
};
class UntagResourcesSystemTagsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> securityToken{};
  shared_ptr<vector<string>> tagKey{};
  shared_ptr<string> tagOwnerBid{};
  shared_ptr<long> tagOwnerUid{};

  UntagResourcesSystemTagsRequest() {}

  explicit UntagResourcesSystemTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagOwnerBid) {
      res["TagOwnerBid"] = boost::any(*tagOwnerBid);
    }
    if (tagOwnerUid) {
      res["TagOwnerUid"] = boost::any(*tagOwnerUid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagKey"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagKey"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagKey = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TagOwnerBid") != m.end() && !m["TagOwnerBid"].empty()) {
      tagOwnerBid = make_shared<string>(boost::any_cast<string>(m["TagOwnerBid"]));
    }
    if (m.find("TagOwnerUid") != m.end() && !m["TagOwnerUid"].empty()) {
      tagOwnerUid = make_shared<long>(boost::any_cast<long>(m["TagOwnerUid"]));
    }
  }


  virtual ~UntagResourcesSystemTagsRequest() = default;
};
class UntagResourcesSystemTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UntagResourcesSystemTagsResponseBody() {}

  explicit UntagResourcesSystemTagsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UntagResourcesSystemTagsResponseBody() = default;
};
class UntagResourcesSystemTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UntagResourcesSystemTagsResponseBody> body{};

  UntagResourcesSystemTagsResponse() {}

  explicit UntagResourcesSystemTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UntagResourcesSystemTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UntagResourcesSystemTagsResponseBody>(model1);
      }
    }
  }


  virtual ~UntagResourcesSystemTagsResponse() = default;
};
class VipMigrationRequest : public Darabonba::Model {
public:
  shared_ptr<string> newVip{};
  shared_ptr<string> originalVip{};

  VipMigrationRequest() {}

  explicit VipMigrationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newVip) {
      res["NewVip"] = boost::any(*newVip);
    }
    if (originalVip) {
      res["OriginalVip"] = boost::any(*originalVip);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewVip") != m.end() && !m["NewVip"].empty()) {
      newVip = make_shared<string>(boost::any_cast<string>(m["NewVip"]));
    }
    if (m.find("OriginalVip") != m.end() && !m["OriginalVip"].empty()) {
      originalVip = make_shared<string>(boost::any_cast<string>(m["OriginalVip"]));
    }
  }


  virtual ~VipMigrationRequest() = default;
};
class VipMigrationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};

  VipMigrationResponse() {}

  explicit VipMigrationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
  }


  virtual ~VipMigrationResponse() = default;
};
class VipMigrationByUidRequest : public Darabonba::Model {
public:
  shared_ptr<string> newVip{};
  shared_ptr<string> originalVip{};

  VipMigrationByUidRequest() {}

  explicit VipMigrationByUidRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (newVip) {
      res["NewVip"] = boost::any(*newVip);
    }
    if (originalVip) {
      res["OriginalVip"] = boost::any(*originalVip);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NewVip") != m.end() && !m["NewVip"].empty()) {
      newVip = make_shared<string>(boost::any_cast<string>(m["NewVip"]));
    }
    if (m.find("OriginalVip") != m.end() && !m["OriginalVip"].empty()) {
      originalVip = make_shared<string>(boost::any_cast<string>(m["OriginalVip"]));
    }
  }


  virtual ~VipMigrationByUidRequest() = default;
};
class VipMigrationByUidResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VipMigrationByUidResponseBody() {}

  explicit VipMigrationByUidResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~VipMigrationByUidResponseBody() = default;
};
class VipMigrationByUidResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VipMigrationByUidResponseBody> body{};

  VipMigrationByUidResponse() {}

  explicit VipMigrationByUidResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        VipMigrationByUidResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VipMigrationByUidResponseBody>(model1);
      }
    }
  }


  virtual ~VipMigrationByUidResponse() = default;
};
class VpcAddAppServerRequest : public Darabonba::Model {
public:
  shared_ptr<string> addressPoolId{};
  shared_ptr<string> appId{};
  shared_ptr<string> serverIp{};
  shared_ptr<string> token{};

  VpcAddAppServerRequest() {}

  explicit VpcAddAppServerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressPoolId) {
      res["AddressPoolId"] = boost::any(*addressPoolId);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (serverIp) {
      res["ServerIp"] = boost::any(*serverIp);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressPoolId") != m.end() && !m["AddressPoolId"].empty()) {
      addressPoolId = make_shared<string>(boost::any_cast<string>(m["AddressPoolId"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ServerIp") != m.end() && !m["ServerIp"].empty()) {
      serverIp = make_shared<string>(boost::any_cast<string>(m["ServerIp"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~VpcAddAppServerRequest() = default;
};
class VpcAddAppServerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VpcAddAppServerResponseBody() {}

  explicit VpcAddAppServerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~VpcAddAppServerResponseBody() = default;
};
class VpcAddAppServerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VpcAddAppServerResponseBody> body{};

  VpcAddAppServerResponse() {}

  explicit VpcAddAppServerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        VpcAddAppServerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VpcAddAppServerResponseBody>(model1);
      }
    }
  }


  virtual ~VpcAddAppServerResponse() = default;
};
class VpcCreateAddressPoolRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> token{};

  VpcCreateAddressPoolRequest() {}

  explicit VpcCreateAddressPoolRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~VpcCreateAddressPoolRequest() = default;
};
class VpcCreateAddressPoolResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> addressPoolId{};
  shared_ptr<string> requestId{};

  VpcCreateAddressPoolResponseBody() {}

  explicit VpcCreateAddressPoolResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressPoolId) {
      res["AddressPoolId"] = boost::any(*addressPoolId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressPoolId") != m.end() && !m["AddressPoolId"].empty()) {
      addressPoolId = make_shared<string>(boost::any_cast<string>(m["AddressPoolId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~VpcCreateAddressPoolResponseBody() = default;
};
class VpcCreateAddressPoolResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VpcCreateAddressPoolResponseBody> body{};

  VpcCreateAddressPoolResponse() {}

  explicit VpcCreateAddressPoolResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        VpcCreateAddressPoolResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VpcCreateAddressPoolResponseBody>(model1);
      }
    }
  }


  virtual ~VpcCreateAddressPoolResponse() = default;
};
class VpcQueryAppServersRequest : public Darabonba::Model {
public:
  shared_ptr<string> addressPoolId{};
  shared_ptr<string> appId{};
  shared_ptr<string> serverIp{};

  VpcQueryAppServersRequest() {}

  explicit VpcQueryAppServersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressPoolId) {
      res["AddressPoolId"] = boost::any(*addressPoolId);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (serverIp) {
      res["ServerIp"] = boost::any(*serverIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressPoolId") != m.end() && !m["AddressPoolId"].empty()) {
      addressPoolId = make_shared<string>(boost::any_cast<string>(m["AddressPoolId"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ServerIp") != m.end() && !m["ServerIp"].empty()) {
      serverIp = make_shared<string>(boost::any_cast<string>(m["ServerIp"]));
    }
  }


  virtual ~VpcQueryAppServersRequest() = default;
};
class VpcQueryAppServersResponseBodyAppServerInfosAppServerInfo : public Darabonba::Model {
public:
  shared_ptr<string> addressPoolId{};
  shared_ptr<string> appId{};
  shared_ptr<string> serverIp{};
  shared_ptr<string> serverMappingIp{};
  shared_ptr<string> serverType{};
  shared_ptr<string> status{};
  shared_ptr<string> vpcId{};

  VpcQueryAppServersResponseBodyAppServerInfosAppServerInfo() {}

  explicit VpcQueryAppServersResponseBodyAppServerInfosAppServerInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addressPoolId) {
      res["AddressPoolId"] = boost::any(*addressPoolId);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (serverIp) {
      res["ServerIp"] = boost::any(*serverIp);
    }
    if (serverMappingIp) {
      res["ServerMappingIp"] = boost::any(*serverMappingIp);
    }
    if (serverType) {
      res["ServerType"] = boost::any(*serverType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AddressPoolId") != m.end() && !m["AddressPoolId"].empty()) {
      addressPoolId = make_shared<string>(boost::any_cast<string>(m["AddressPoolId"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ServerIp") != m.end() && !m["ServerIp"].empty()) {
      serverIp = make_shared<string>(boost::any_cast<string>(m["ServerIp"]));
    }
    if (m.find("ServerMappingIp") != m.end() && !m["ServerMappingIp"].empty()) {
      serverMappingIp = make_shared<string>(boost::any_cast<string>(m["ServerMappingIp"]));
    }
    if (m.find("ServerType") != m.end() && !m["ServerType"].empty()) {
      serverType = make_shared<string>(boost::any_cast<string>(m["ServerType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~VpcQueryAppServersResponseBodyAppServerInfosAppServerInfo() = default;
};
class VpcQueryAppServersResponseBodyAppServerInfos : public Darabonba::Model {
public:
  shared_ptr<vector<VpcQueryAppServersResponseBodyAppServerInfosAppServerInfo>> appServerInfo{};

  VpcQueryAppServersResponseBodyAppServerInfos() {}

  explicit VpcQueryAppServersResponseBodyAppServerInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appServerInfo) {
      vector<boost::any> temp1;
      for(auto item1:*appServerInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AppServerInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppServerInfo") != m.end() && !m["AppServerInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["AppServerInfo"].type()) {
        vector<VpcQueryAppServersResponseBodyAppServerInfosAppServerInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AppServerInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            VpcQueryAppServersResponseBodyAppServerInfosAppServerInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        appServerInfo = make_shared<vector<VpcQueryAppServersResponseBodyAppServerInfosAppServerInfo>>(expect1);
      }
    }
  }


  virtual ~VpcQueryAppServersResponseBodyAppServerInfos() = default;
};
class VpcQueryAppServersResponseBody : public Darabonba::Model {
public:
  shared_ptr<VpcQueryAppServersResponseBodyAppServerInfos> appServerInfos{};
  shared_ptr<string> requestId{};

  VpcQueryAppServersResponseBody() {}

  explicit VpcQueryAppServersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appServerInfos) {
      res["AppServerInfos"] = appServerInfos ? boost::any(appServerInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppServerInfos") != m.end() && !m["AppServerInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["AppServerInfos"].type()) {
        VpcQueryAppServersResponseBodyAppServerInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["AppServerInfos"]));
        appServerInfos = make_shared<VpcQueryAppServersResponseBodyAppServerInfos>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~VpcQueryAppServersResponseBody() = default;
};
class VpcQueryAppServersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VpcQueryAppServersResponseBody> body{};

  VpcQueryAppServersResponse() {}

  explicit VpcQueryAppServersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        VpcQueryAppServersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VpcQueryAppServersResponseBody>(model1);
      }
    }
  }


  virtual ~VpcQueryAppServersResponse() = default;
};
class VpcRegisterAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> token{};

  VpcRegisterAppRequest() {}

  explicit VpcRegisterAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~VpcRegisterAppRequest() = default;
};
class VpcRegisterAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestId{};

  VpcRegisterAppResponseBody() {}

  explicit VpcRegisterAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~VpcRegisterAppResponseBody() = default;
};
class VpcRegisterAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VpcRegisterAppResponseBody> body{};

  VpcRegisterAppResponse() {}

  explicit VpcRegisterAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        VpcRegisterAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VpcRegisterAppResponseBody>(model1);
      }
    }
  }


  virtual ~VpcRegisterAppResponse() = default;
};
class VpcRemoveAppServerRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> serverIp{};
  shared_ptr<string> token{};

  VpcRemoveAppServerRequest() {}

  explicit VpcRemoveAppServerRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (serverIp) {
      res["ServerIp"] = boost::any(*serverIp);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ServerIp") != m.end() && !m["ServerIp"].empty()) {
      serverIp = make_shared<string>(boost::any_cast<string>(m["ServerIp"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~VpcRemoveAppServerRequest() = default;
};
class VpcRemoveAppServerResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  VpcRemoveAppServerResponseBody() {}

  explicit VpcRemoveAppServerResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~VpcRemoveAppServerResponseBody() = default;
};
class VpcRemoveAppServerResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<VpcRemoveAppServerResponseBody> body{};

  VpcRemoveAppServerResponse() {}

  explicit VpcRemoveAppServerResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        VpcRemoveAppServerResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<VpcRemoveAppServerResponseBody>(model1);
      }
    }
  }


  virtual ~VpcRemoveAppServerResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  AbolishApiResponse abolishApiWithOptions(shared_ptr<AbolishApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AbolishApiResponse abolishApi(shared_ptr<AbolishApiRequest> request);
  AbolishApiForInnerResponse abolishApiForInnerWithOptions(shared_ptr<AbolishApiForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AbolishApiForInnerResponse abolishApiForInner(shared_ptr<AbolishApiForInnerRequest> request);
  AddBlackListResponse addBlackListWithOptions(shared_ptr<AddBlackListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddBlackListResponse addBlackList(shared_ptr<AddBlackListRequest> request);
  AddTrafficSpecialControlResponse addTrafficSpecialControlWithOptions(shared_ptr<AddTrafficSpecialControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddTrafficSpecialControlResponse addTrafficSpecialControl(shared_ptr<AddTrafficSpecialControlRequest> request);
  CheckAccountForInnerResponse checkAccountForInnerWithOptions(shared_ptr<CheckAccountForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckAccountForInnerResponse checkAccountForInner(shared_ptr<CheckAccountForInnerRequest> request);
  CheckAoneAppAuditResponse checkAoneAppAuditWithOptions(shared_ptr<CheckAoneAppAuditRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckAoneAppAuditResponse checkAoneAppAudit(shared_ptr<CheckAoneAppAuditRequest> request);
  CopyConsumerOpenForInnerResponse copyConsumerOpenForInnerWithOptions(shared_ptr<CopyConsumerOpenForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CopyConsumerOpenForInnerResponse copyConsumerOpenForInner(shared_ptr<CopyConsumerOpenForInnerRequest> request);
  CreateApiResponse createApiWithOptions(shared_ptr<CreateApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateApiResponse createApi(shared_ptr<CreateApiRequest> request);
  CreateApiForInnerResponse createApiForInnerWithOptions(shared_ptr<CreateApiForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateApiForInnerResponse createApiForInner(shared_ptr<CreateApiForInnerRequest> request);
  CreateApiGroupResponse createApiGroupWithOptions(shared_ptr<CreateApiGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateApiGroupResponse createApiGroup(shared_ptr<CreateApiGroupRequest> request);
  CreateApiGroupForInnerResponse createApiGroupForInnerWithOptions(shared_ptr<CreateApiGroupForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateApiGroupForInnerResponse createApiGroupForInner(shared_ptr<CreateApiGroupForInnerRequest> request);
  CreateAppResponse createAppWithOptions(shared_ptr<CreateAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppResponse createApp(shared_ptr<CreateAppRequest> request);
  CreateAppForBackendResponse createAppForBackendWithOptions(shared_ptr<CreateAppForBackendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppForBackendResponse createAppForBackend(shared_ptr<CreateAppForBackendRequest> request);
  CreateAppForInnerResponse createAppForInnerWithOptions(shared_ptr<CreateAppForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppForInnerResponse createAppForInner(shared_ptr<CreateAppForInnerRequest> request);
  CreateInstanceResponse createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceResponse createInstance(shared_ptr<CreateInstanceRequest> request);
  CreateRaceWorkForInnerResponse createRaceWorkForInnerWithOptions(shared_ptr<CreateRaceWorkForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRaceWorkForInnerResponse createRaceWorkForInner(shared_ptr<CreateRaceWorkForInnerRequest> request);
  CreateSecretKeyResponse createSecretKeyWithOptions(shared_ptr<CreateSecretKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSecretKeyResponse createSecretKey(shared_ptr<CreateSecretKeyRequest> request);
  CreateTrafficControlResponse createTrafficControlWithOptions(shared_ptr<CreateTrafficControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTrafficControlResponse createTrafficControl(shared_ptr<CreateTrafficControlRequest> request);
  CreateUserWhiteListResponse createUserWhiteListWithOptions(shared_ptr<CreateUserWhiteListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUserWhiteListResponse createUserWhiteList(shared_ptr<CreateUserWhiteListRequest> request);
  DeleteAllTrafficSpecialControlResponse deleteAllTrafficSpecialControlWithOptions(shared_ptr<DeleteAllTrafficSpecialControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAllTrafficSpecialControlResponse deleteAllTrafficSpecialControl(shared_ptr<DeleteAllTrafficSpecialControlRequest> request);
  DeleteApiResponse deleteApiWithOptions(shared_ptr<DeleteApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteApiResponse deleteApi(shared_ptr<DeleteApiRequest> request);
  DeleteApiForInnerResponse deleteApiForInnerWithOptions(shared_ptr<DeleteApiForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteApiForInnerResponse deleteApiForInner(shared_ptr<DeleteApiForInnerRequest> request);
  DeleteApiGroupResponse deleteApiGroupWithOptions(shared_ptr<DeleteApiGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteApiGroupResponse deleteApiGroup(shared_ptr<DeleteApiGroupRequest> request);
  DeleteAppResponse deleteAppWithOptions(shared_ptr<DeleteAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAppResponse deleteApp(shared_ptr<DeleteAppRequest> request);
  DeleteAppForInnerResponse deleteAppForInnerWithOptions(shared_ptr<DeleteAppForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteAppForInnerResponse deleteAppForInner(shared_ptr<DeleteAppForInnerRequest> request);
  DeleteDomainResponse deleteDomainWithOptions(shared_ptr<DeleteDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDomainResponse deleteDomain(shared_ptr<DeleteDomainRequest> request);
  DeleteDomainCertificateResponse deleteDomainCertificateWithOptions(shared_ptr<DeleteDomainCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDomainCertificateResponse deleteDomainCertificate(shared_ptr<DeleteDomainCertificateRequest> request);
  DeleteSecretKeyResponse deleteSecretKeyWithOptions(shared_ptr<DeleteSecretKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSecretKeyResponse deleteSecretKey(shared_ptr<DeleteSecretKeyRequest> request);
  DeleteTrafficControlResponse deleteTrafficControlWithOptions(shared_ptr<DeleteTrafficControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTrafficControlResponse deleteTrafficControl(shared_ptr<DeleteTrafficControlRequest> request);
  DeleteTrafficSpecialControlResponse deleteTrafficSpecialControlWithOptions(shared_ptr<DeleteTrafficSpecialControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTrafficSpecialControlResponse deleteTrafficSpecialControl(shared_ptr<DeleteTrafficSpecialControlRequest> request);
  DeleteUserWhiteListByTypeResponse deleteUserWhiteListByTypeWithOptions(shared_ptr<DeleteUserWhiteListByTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserWhiteListByTypeResponse deleteUserWhiteListByType(shared_ptr<DeleteUserWhiteListByTypeRequest> request);
  DeployApiResponse deployApiWithOptions(shared_ptr<DeployApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeployApiResponse deployApi(shared_ptr<DeployApiRequest> request);
  DeployApiForInnerResponse deployApiForInnerWithOptions(shared_ptr<DeployApiForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeployApiForInnerResponse deployApiForInner(shared_ptr<DeployApiForInnerRequest> request);
  DescribeApiResponse describeApiWithOptions(shared_ptr<DescribeApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApiResponse describeApi(shared_ptr<DescribeApiRequest> request);
  DescribeApiDocResponse describeApiDocWithOptions(shared_ptr<DescribeApiDocRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApiDocResponse describeApiDoc(shared_ptr<DescribeApiDocRequest> request);
  DescribeApiDocsResponse describeApiDocsWithOptions(shared_ptr<DescribeApiDocsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApiDocsResponse describeApiDocs(shared_ptr<DescribeApiDocsRequest> request);
  DescribeApiDocsForBackendResponse describeApiDocsForBackendWithOptions(shared_ptr<DescribeApiDocsForBackendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApiDocsForBackendResponse describeApiDocsForBackend(shared_ptr<DescribeApiDocsForBackendRequest> request);
  DescribeApiErrorResponse describeApiErrorWithOptions(shared_ptr<DescribeApiErrorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApiErrorResponse describeApiError(shared_ptr<DescribeApiErrorRequest> request);
  DescribeApiGroupDetailResponse describeApiGroupDetailWithOptions(shared_ptr<DescribeApiGroupDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApiGroupDetailResponse describeApiGroupDetail(shared_ptr<DescribeApiGroupDetailRequest> request);
  DescribeApiGroupsResponse describeApiGroupsWithOptions(shared_ptr<DescribeApiGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApiGroupsResponse describeApiGroups(shared_ptr<DescribeApiGroupsRequest> request);
  DescribeApiLatencyResponse describeApiLatencyWithOptions(shared_ptr<DescribeApiLatencyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApiLatencyResponse describeApiLatency(shared_ptr<DescribeApiLatencyRequest> request);
  DescribeApiMarketInstanceResponse describeApiMarketInstanceWithOptions(shared_ptr<DescribeApiMarketInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApiMarketInstanceResponse describeApiMarketInstance(shared_ptr<DescribeApiMarketInstanceRequest> request);
  DescribeApiQpsResponse describeApiQpsWithOptions(shared_ptr<DescribeApiQpsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApiQpsResponse describeApiQps(shared_ptr<DescribeApiQpsRequest> request);
  DescribeApiRulesResponse describeApiRulesWithOptions(shared_ptr<DescribeApiRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApiRulesResponse describeApiRules(shared_ptr<DescribeApiRulesRequest> request);
  DescribeApiTrafficResponse describeApiTrafficWithOptions(shared_ptr<DescribeApiTrafficRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApiTrafficResponse describeApiTraffic(shared_ptr<DescribeApiTrafficRequest> request);
  DescribeApisResponse describeApisWithOptions(shared_ptr<DescribeApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApisResponse describeApis(shared_ptr<DescribeApisRequest> request);
  DescribeApisByAppResponse describeApisByAppWithOptions(shared_ptr<DescribeApisByAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApisByAppResponse describeApisByApp(shared_ptr<DescribeApisByAppRequest> request);
  DescribeApisByRuleResponse describeApisByRuleWithOptions(shared_ptr<DescribeApisByRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApisByRuleResponse describeApisByRule(shared_ptr<DescribeApisByRuleRequest> request);
  DescribeApisForConsoleResponse describeApisForConsoleWithOptions(shared_ptr<DescribeApisForConsoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApisForConsoleResponse describeApisForConsole(shared_ptr<DescribeApisForConsoleRequest> request);
  DescribeAppResponse describeAppWithOptions(shared_ptr<DescribeAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppResponse describeApp(shared_ptr<DescribeAppRequest> request);
  DescribeAppSecuritiesResponse describeAppSecuritiesWithOptions(shared_ptr<DescribeAppSecuritiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppSecuritiesResponse describeAppSecurities(shared_ptr<DescribeAppSecuritiesRequest> request);
  DescribeAppSecurityResponse describeAppSecurityWithOptions(shared_ptr<DescribeAppSecurityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppSecurityResponse describeAppSecurity(shared_ptr<DescribeAppSecurityRequest> request);
  DescribeAppSecurityForInnerResponse describeAppSecurityForInnerWithOptions(shared_ptr<DescribeAppSecurityForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppSecurityForInnerResponse describeAppSecurityForInner(shared_ptr<DescribeAppSecurityForInnerRequest> request);
  DescribeAppsResponse describeAppsWithOptions(shared_ptr<DescribeAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppsResponse describeApps(shared_ptr<DescribeAppsRequest> request);
  DescribeAppsByApiResponse describeAppsByApiWithOptions(shared_ptr<DescribeAppsByApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppsByApiResponse describeAppsByApi(shared_ptr<DescribeAppsByApiRequest> request);
  DescribeAppsForProviderResponse describeAppsForProviderWithOptions(shared_ptr<DescribeAppsForProviderRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAppsForProviderResponse describeAppsForProvider(shared_ptr<DescribeAppsForProviderRequest> request);
  DescribeAvailableVipsResponse describeAvailableVipsWithOptions(shared_ptr<DescribeAvailableVipsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAvailableVipsResponse describeAvailableVips(shared_ptr<DescribeAvailableVipsRequest> request);
  DescribeBidByUserIdForInnerResponse describeBidByUserIdForInnerWithOptions(shared_ptr<DescribeBidByUserIdForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBidByUserIdForInnerResponse describeBidByUserIdForInner(shared_ptr<DescribeBidByUserIdForInnerRequest> request);
  DescribeBlackListsResponse describeBlackListsWithOptions(shared_ptr<DescribeBlackListsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBlackListsResponse describeBlackLists(shared_ptr<DescribeBlackListsRequest> request);
  DescribeDeployedApiResponse describeDeployedApiWithOptions(shared_ptr<DescribeDeployedApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDeployedApiResponse describeDeployedApi(shared_ptr<DescribeDeployedApiRequest> request);
  DescribeDeployedApisResponse describeDeployedApisWithOptions(shared_ptr<DescribeDeployedApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDeployedApisResponse describeDeployedApis(shared_ptr<DescribeDeployedApisRequest> request);
  DescribeDomainResponse describeDomainWithOptions(shared_ptr<DescribeDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainResponse describeDomain(shared_ptr<DescribeDomainRequest> request);
  DescribeDomainResolutionResponse describeDomainResolutionWithOptions(shared_ptr<DescribeDomainResolutionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDomainResolutionResponse describeDomainResolution(shared_ptr<DescribeDomainResolutionRequest> request);
  DescribeHistoryApiResponse describeHistoryApiWithOptions(shared_ptr<DescribeHistoryApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHistoryApiResponse describeHistoryApi(shared_ptr<DescribeHistoryApiRequest> request);
  DescribeHistoryApisResponse describeHistoryApisWithOptions(shared_ptr<DescribeHistoryApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeHistoryApisResponse describeHistoryApis(shared_ptr<DescribeHistoryApisRequest> request);
  DescribeModelsForInnerResponse describeModelsForInnerWithOptions(shared_ptr<DescribeModelsForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeModelsForInnerResponse describeModelsForInner(shared_ptr<DescribeModelsForInnerRequest> request);
  DescribePurchasedApiResponse describePurchasedApiWithOptions(shared_ptr<DescribePurchasedApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePurchasedApiResponse describePurchasedApi(shared_ptr<DescribePurchasedApiRequest> request);
  DescribePurchasedApiGroupDetailResponse describePurchasedApiGroupDetailWithOptions(shared_ptr<DescribePurchasedApiGroupDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePurchasedApiGroupDetailResponse describePurchasedApiGroupDetail(shared_ptr<DescribePurchasedApiGroupDetailRequest> request);
  DescribePurchasedApiGroupsResponse describePurchasedApiGroupsWithOptions(shared_ptr<DescribePurchasedApiGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePurchasedApiGroupsResponse describePurchasedApiGroups(shared_ptr<DescribePurchasedApiGroupsRequest> request);
  DescribePurchasedApisResponse describePurchasedApisWithOptions(shared_ptr<DescribePurchasedApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePurchasedApisResponse describePurchasedApis(shared_ptr<DescribePurchasedApisRequest> request);
  DescribeRaceWorkForInnerResponse describeRaceWorkForInnerWithOptions(shared_ptr<DescribeRaceWorkForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRaceWorkForInnerResponse describeRaceWorkForInner(shared_ptr<DescribeRaceWorkForInnerRequest> request);
  DescribeRaceWorksForInnerResponse describeRaceWorksForInnerWithOptions(shared_ptr<DescribeRaceWorksForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRaceWorksForInnerResponse describeRaceWorksForInner(shared_ptr<DescribeRaceWorksForInnerRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeRulesByApiResponse describeRulesByApiWithOptions(shared_ptr<DescribeRulesByApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRulesByApiResponse describeRulesByApi(shared_ptr<DescribeRulesByApiRequest> request);
  DescribeSecretKeysResponse describeSecretKeysWithOptions(shared_ptr<DescribeSecretKeysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSecretKeysResponse describeSecretKeys(shared_ptr<DescribeSecretKeysRequest> request);
  DescribeSystemParametersResponse describeSystemParametersWithOptions(shared_ptr<DescribeSystemParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSystemParametersResponse describeSystemParameters(shared_ptr<DescribeSystemParametersRequest> request);
  DescribeSystemParamsResponse describeSystemParamsWithOptions(shared_ptr<DescribeSystemParamsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSystemParamsResponse describeSystemParams(shared_ptr<DescribeSystemParamsRequest> request);
  DescribeTrafficControlsResponse describeTrafficControlsWithOptions(shared_ptr<DescribeTrafficControlsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTrafficControlsResponse describeTrafficControls(shared_ptr<DescribeTrafficControlsRequest> request);
  DescribeUserWhiteListsResponse describeUserWhiteListsWithOptions(shared_ptr<DescribeUserWhiteListsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserWhiteListsResponse describeUserWhiteLists(shared_ptr<DescribeUserWhiteListsRequest> request);
  IsIncludedByUserWhitelistResponse isIncludedByUserWhitelistWithOptions(shared_ptr<IsIncludedByUserWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  IsIncludedByUserWhitelistResponse isIncludedByUserWhitelist(shared_ptr<IsIncludedByUserWhitelistRequest> request);
  ModifyApiResponse modifyApiWithOptions(shared_ptr<ModifyApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyApiResponse modifyApi(shared_ptr<ModifyApiRequest> request);
  ModifyApiForInnerResponse modifyApiForInnerWithOptions(shared_ptr<ModifyApiForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyApiForInnerResponse modifyApiForInner(shared_ptr<ModifyApiForInnerRequest> request);
  ModifyApiGroupResponse modifyApiGroupWithOptions(shared_ptr<ModifyApiGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyApiGroupResponse modifyApiGroup(shared_ptr<ModifyApiGroupRequest> request);
  ModifyApiMarketInstanceAttributeResponse modifyApiMarketInstanceAttributeWithOptions(shared_ptr<ModifyApiMarketInstanceAttributeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyApiMarketInstanceAttributeResponse modifyApiMarketInstanceAttribute(shared_ptr<ModifyApiMarketInstanceAttributeRequest> request);
  ModifyAppResponse modifyAppWithOptions(shared_ptr<ModifyAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAppResponse modifyApp(shared_ptr<ModifyAppRequest> request);
  ModifyAppForInnerResponse modifyAppForInnerWithOptions(shared_ptr<ModifyAppForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAppForInnerResponse modifyAppForInner(shared_ptr<ModifyAppForInnerRequest> request);
  ModifyGroupAuthAppCodeForBackendResponse modifyGroupAuthAppCodeForBackendWithOptions(shared_ptr<ModifyGroupAuthAppCodeForBackendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyGroupAuthAppCodeForBackendResponse modifyGroupAuthAppCodeForBackend(shared_ptr<ModifyGroupAuthAppCodeForBackendRequest> request);
  ModifySecretKeyResponse modifySecretKeyWithOptions(shared_ptr<ModifySecretKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifySecretKeyResponse modifySecretKey(shared_ptr<ModifySecretKeyRequest> request);
  ModifyTrafficControlResponse modifyTrafficControlWithOptions(shared_ptr<ModifyTrafficControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyTrafficControlResponse modifyTrafficControl(shared_ptr<ModifyTrafficControlRequest> request);
  ModifyUserWhiteListValueByTypeResponse modifyUserWhiteListValueByTypeWithOptions(shared_ptr<ModifyUserWhiteListValueByTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyUserWhiteListValueByTypeResponse modifyUserWhiteListValueByType(shared_ptr<ModifyUserWhiteListValueByTypeRequest> request);
  ReactivateDomainForBackendResponse reactivateDomainForBackendWithOptions(shared_ptr<ReactivateDomainForBackendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReactivateDomainForBackendResponse reactivateDomainForBackend(shared_ptr<ReactivateDomainForBackendRequest> request);
  RecoverApiFromHistoricalResponse recoverApiFromHistoricalWithOptions(shared_ptr<RecoverApiFromHistoricalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecoverApiFromHistoricalResponse recoverApiFromHistorical(shared_ptr<RecoverApiFromHistoricalRequest> request);
  RecoveryApiDefineFromHistoricalResponse recoveryApiDefineFromHistoricalWithOptions(shared_ptr<RecoveryApiDefineFromHistoricalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecoveryApiDefineFromHistoricalResponse recoveryApiDefineFromHistorical(shared_ptr<RecoveryApiDefineFromHistoricalRequest> request);
  RecoveryApiFromHistoricalResponse recoveryApiFromHistoricalWithOptions(shared_ptr<RecoveryApiFromHistoricalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RecoveryApiFromHistoricalResponse recoveryApiFromHistorical(shared_ptr<RecoveryApiFromHistoricalRequest> request);
  RefreshDomainResponse refreshDomainWithOptions(shared_ptr<RefreshDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefreshDomainResponse refreshDomain(shared_ptr<RefreshDomainRequest> request);
  RemoveAccessPermissionByApisResponse removeAccessPermissionByApisWithOptions(shared_ptr<RemoveAccessPermissionByApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveAccessPermissionByApisResponse removeAccessPermissionByApis(shared_ptr<RemoveAccessPermissionByApisRequest> request);
  RemoveAccessPermissionByAppsResponse removeAccessPermissionByAppsWithOptions(shared_ptr<RemoveAccessPermissionByAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveAccessPermissionByAppsResponse removeAccessPermissionByApps(shared_ptr<RemoveAccessPermissionByAppsRequest> request);
  RemoveAccessPermissionByAppsForInnerResponse removeAccessPermissionByAppsForInnerWithOptions(shared_ptr<RemoveAccessPermissionByAppsForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveAccessPermissionByAppsForInnerResponse removeAccessPermissionByAppsForInner(shared_ptr<RemoveAccessPermissionByAppsForInnerRequest> request);
  RemoveAllBlackListResponse removeAllBlackListWithOptions(shared_ptr<RemoveAllBlackListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveAllBlackListResponse removeAllBlackList(shared_ptr<RemoveAllBlackListRequest> request);
  RemoveApiRuleResponse removeApiRuleWithOptions(shared_ptr<RemoveApiRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveApiRuleResponse removeApiRule(shared_ptr<RemoveApiRuleRequest> request);
  RemoveAppsFromApiResponse removeAppsFromApiWithOptions(shared_ptr<RemoveAppsFromApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveAppsFromApiResponse removeAppsFromApi(shared_ptr<RemoveAppsFromApiRequest> request);
  RemoveBlackListResponse removeBlackListWithOptions(shared_ptr<RemoveBlackListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveBlackListResponse removeBlackList(shared_ptr<RemoveBlackListRequest> request);
  ResetAppCodeResponse resetAppCodeWithOptions(shared_ptr<ResetAppCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetAppCodeResponse resetAppCode(shared_ptr<ResetAppCodeRequest> request);
  ResetAppCodeForInnerResponse resetAppCodeForInnerWithOptions(shared_ptr<ResetAppCodeForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetAppCodeForInnerResponse resetAppCodeForInner(shared_ptr<ResetAppCodeForInnerRequest> request);
  ResetAppKeySecretResponse resetAppKeySecretWithOptions(shared_ptr<ResetAppKeySecretRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetAppKeySecretResponse resetAppKeySecret(shared_ptr<ResetAppKeySecretRequest> request);
  ResetSecretByAppKeyForInnerResponse resetSecretByAppKeyForInnerWithOptions(shared_ptr<ResetSecretByAppKeyForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetSecretByAppKeyForInnerResponse resetSecretByAppKeyForInner(shared_ptr<ResetSecretByAppKeyForInnerRequest> request);
  SetAccessPermissionByApisResponse setAccessPermissionByApisWithOptions(shared_ptr<SetAccessPermissionByApisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetAccessPermissionByApisResponse setAccessPermissionByApis(shared_ptr<SetAccessPermissionByApisRequest> request);
  SetAccessPermissionByGroupForBackendResponse setAccessPermissionByGroupForBackendWithOptions(shared_ptr<SetAccessPermissionByGroupForBackendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetAccessPermissionByGroupForBackendResponse setAccessPermissionByGroupForBackend(shared_ptr<SetAccessPermissionByGroupForBackendRequest> request);
  SetAccessPermissionsResponse setAccessPermissionsWithOptions(shared_ptr<SetAccessPermissionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetAccessPermissionsResponse setAccessPermissions(shared_ptr<SetAccessPermissionsRequest> request);
  SetAccessPermissionsForInnerResponse setAccessPermissionsForInnerWithOptions(shared_ptr<SetAccessPermissionsForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetAccessPermissionsForInnerResponse setAccessPermissionsForInner(shared_ptr<SetAccessPermissionsForInnerRequest> request);
  SetApiRuleResponse setApiRuleWithOptions(shared_ptr<SetApiRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetApiRuleResponse setApiRule(shared_ptr<SetApiRuleRequest> request);
  SetDomainResponse setDomainWithOptions(shared_ptr<SetDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDomainResponse setDomain(shared_ptr<SetDomainRequest> request);
  SetDomainCertificateResponse setDomainCertificateWithOptions(shared_ptr<SetDomainCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDomainCertificateResponse setDomainCertificate(shared_ptr<SetDomainCertificateRequest> request);
  SetDomainForBackendResponse setDomainForBackendWithOptions(shared_ptr<SetDomainForBackendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDomainForBackendResponse setDomainForBackend(shared_ptr<SetDomainForBackendRequest> request);
  SetMockIntegrationResponse setMockIntegrationWithOptions(shared_ptr<SetMockIntegrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetMockIntegrationResponse setMockIntegration(shared_ptr<SetMockIntegrationRequest> request);
  SetPurchasedApiGroupStatusResponse setPurchasedApiGroupStatusWithOptions(shared_ptr<SetPurchasedApiGroupStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetPurchasedApiGroupStatusResponse setPurchasedApiGroupStatus(shared_ptr<SetPurchasedApiGroupStatusRequest> request);
  SwitchApiResponse switchApiWithOptions(shared_ptr<SwitchApiRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SwitchApiResponse switchApi(shared_ptr<SwitchApiRequest> request);
  SwitchApiForInnerResponse switchApiForInnerWithOptions(shared_ptr<SwitchApiForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SwitchApiForInnerResponse switchApiForInner(shared_ptr<SwitchApiForInnerRequest> request);
  SynCreateAppForInnerResponse synCreateAppForInnerWithOptions(shared_ptr<SynCreateAppForInnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SynCreateAppForInnerResponse synCreateAppForInner(shared_ptr<SynCreateAppForInnerRequest> request);
  TagResourcesSystemTagsResponse tagResourcesSystemTagsWithOptions(shared_ptr<TagResourcesSystemTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesSystemTagsResponse tagResourcesSystemTags(shared_ptr<TagResourcesSystemTagsRequest> request);
  UntagResourcesSystemTagsResponse untagResourcesSystemTagsWithOptions(shared_ptr<UntagResourcesSystemTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesSystemTagsResponse untagResourcesSystemTags(shared_ptr<UntagResourcesSystemTagsRequest> request);
  VipMigrationResponse vipMigrationWithOptions(shared_ptr<VipMigrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VipMigrationResponse vipMigration(shared_ptr<VipMigrationRequest> request);
  VipMigrationByUidResponse vipMigrationByUidWithOptions(shared_ptr<VipMigrationByUidRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VipMigrationByUidResponse vipMigrationByUid(shared_ptr<VipMigrationByUidRequest> request);
  VpcAddAppServerResponse vpcAddAppServerWithOptions(shared_ptr<VpcAddAppServerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VpcAddAppServerResponse vpcAddAppServer(shared_ptr<VpcAddAppServerRequest> request);
  VpcCreateAddressPoolResponse vpcCreateAddressPoolWithOptions(shared_ptr<VpcCreateAddressPoolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VpcCreateAddressPoolResponse vpcCreateAddressPool(shared_ptr<VpcCreateAddressPoolRequest> request);
  VpcQueryAppServersResponse vpcQueryAppServersWithOptions(shared_ptr<VpcQueryAppServersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VpcQueryAppServersResponse vpcQueryAppServers(shared_ptr<VpcQueryAppServersRequest> request);
  VpcRegisterAppResponse vpcRegisterAppWithOptions(shared_ptr<VpcRegisterAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VpcRegisterAppResponse vpcRegisterApp(shared_ptr<VpcRegisterAppRequest> request);
  VpcRemoveAppServerResponse vpcRemoveAppServerWithOptions(shared_ptr<VpcRemoveAppServerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  VpcRemoveAppServerResponse vpcRemoveAppServer(shared_ptr<VpcRemoveAppServerRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_CloudAPI20160201

#endif
