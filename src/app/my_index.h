#pragma once

#include "ccf/ds/logger.h"
#include "ccf/indexing/strategies/visit_each_entry_in_map.h"

class MyIndex : public ccf::indexing::strategies::VisitEachEntryInMap
{
protected:
  void visit_entry(
    const ccf::TxID& tx_id, const ccf::ByteVector& k, const ccf::ByteVector& v)
  {
    LOG_INFO_FMT("Indexing a transaction {}", tx_id.to_str());
  }

public:
  using ccf::indexing::strategies::VisitEachEntryInMap::VisitEachEntryInMap;
};
