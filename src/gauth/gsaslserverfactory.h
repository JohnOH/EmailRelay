//
// Copyright (C) 2001-2013 Graeme Walker <graeme_walker@users.sourceforge.net>
// 
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
// ===
///
/// \file gsaslserverfactory.h
///

#ifndef G_SASL_SERVER_FACTORY_H
#define G_SASL_SERVER_FACTORY_H

#include "gdef.h"
#include "gauth.h"
#include "gsaslserver.h"
#include "gsecrets.h"
#include <memory>

/// \namespace GAuth
namespace GAuth
{
	class SaslServerFactory ;
}

/// \class GAuth::SaslServerFactory
/// Provides a factory function for SaslServer instances.
///
class GAuth::SaslServerFactory 
{
public:
	static std::auto_ptr<SaslServer> newSaslServer( const SaslServer::Secrets & , bool , bool ) ;
		///< A factory function for a SaslServer.

private:
	SaslServerFactory() ; // not implemented
} ;

#endif
