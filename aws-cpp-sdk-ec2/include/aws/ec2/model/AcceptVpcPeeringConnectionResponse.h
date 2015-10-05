/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/VpcPeeringConnection.h>
#include <aws/ec2/model/ResponseMetadata.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_EC2_API AcceptVpcPeeringConnectionResponse
  {
  public:
    AcceptVpcPeeringConnectionResponse();
    AcceptVpcPeeringConnectionResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AcceptVpcPeeringConnectionResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /*
     <p>Information about the VPC peering connection.</p>
    */
    inline const VpcPeeringConnection& GetVpcPeeringConnection() const{ return m_vpcPeeringConnection; }

    /*
     <p>Information about the VPC peering connection.</p>
    */
    inline void SetVpcPeeringConnection(const VpcPeeringConnection& value) { m_vpcPeeringConnection = value; }

    /*
     <p>Information about the VPC peering connection.</p>
    */
    inline void SetVpcPeeringConnection(VpcPeeringConnection&& value) { m_vpcPeeringConnection = value; }

    /*
     <p>Information about the VPC peering connection.</p>
    */
    inline AcceptVpcPeeringConnectionResponse& WithVpcPeeringConnection(const VpcPeeringConnection& value) { SetVpcPeeringConnection(value); return *this;}

    /*
     <p>Information about the VPC peering connection.</p>
    */
    inline AcceptVpcPeeringConnectionResponse& WithVpcPeeringConnection(VpcPeeringConnection&& value) { SetVpcPeeringConnection(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline AcceptVpcPeeringConnectionResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline AcceptVpcPeeringConnectionResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    VpcPeeringConnection m_vpcPeeringConnection;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws