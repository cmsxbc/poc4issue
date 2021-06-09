 /*
This file is auto generated by compile_lightgbm_model,
DO NOT MODIFY IT.
*/

#include <daal.h>
using namespace daal::algorithms::gbt::regression;
void buildTree83(ModelBuilder &builder, ModelBuilder::NodeId nodeIds[]) {
    ModelBuilder::TreeId treeId;
    treeId = builder.createTree(61);
    nodeIds[1] = builder.addSplitNode(treeId, nodeIds[0], 0, 3, (DAAL_DATA_TYPE)1.3505000000000003);
    nodeIds[2] = builder.addSplitNode(treeId, nodeIds[1], 0, 23, (DAAL_DATA_TYPE)1.5210000000000001);
    nodeIds[3] = builder.addSplitNode(treeId, nodeIds[2], 0, 6, (DAAL_DATA_TYPE)-0.056499999999999995);
    nodeIds[4] = builder.addSplitNode(treeId, nodeIds[3], 0, 24, (DAAL_DATA_TYPE)1.9665000000000001);
    nodeIds[5] = builder.addSplitNode(treeId, nodeIds[4], 0, 19, (DAAL_DATA_TYPE)0.38150000000000006);
    nodeIds[6] = builder.addSplitNode(treeId, nodeIds[5], 0, 4, (DAAL_DATA_TYPE)-1.2644999999999997);
    nodeIds[7] = builder.addSplitNode(treeId, nodeIds[6], 0, 11, (DAAL_DATA_TYPE)0.96150000000000013);
    nodeIds[8] = builder.addSplitNode(treeId, nodeIds[7], 0, 21, (DAAL_DATA_TYPE)1.0925000000000002);
    builder.addLeafNode(treeId, nodeIds[8], 0, (DAAL_DATA_TYPE)0.0012928788228115688);
    builder.addLeafNode(treeId, nodeIds[8], 1, (DAAL_DATA_TYPE)0.014378890791988891);
    builder.addLeafNode(treeId, nodeIds[7], 1, (DAAL_DATA_TYPE)0.013233033045217758);
    nodeIds[12] = builder.addSplitNode(treeId, nodeIds[6], 1, 6, (DAAL_DATA_TYPE)-1.2374999999999998);
    nodeIds[13] = builder.addSplitNode(treeId, nodeIds[12], 0, 5, (DAAL_DATA_TYPE)1.3745000000000003);
    nodeIds[14] = builder.addSplitNode(treeId, nodeIds[13], 0, 11, (DAAL_DATA_TYPE)-1.2414999999999998);
    builder.addLeafNode(treeId, nodeIds[14], 0, (DAAL_DATA_TYPE)-0.013372845145372245);
    builder.addLeafNode(treeId, nodeIds[14], 1, (DAAL_DATA_TYPE)-0.0017406259606768553);
    builder.addLeafNode(treeId, nodeIds[13], 1, (DAAL_DATA_TYPE)0.0059753371578817431);
    builder.addLeafNode(treeId, nodeIds[12], 1, (DAAL_DATA_TYPE)0.0021462577880972042);
    nodeIds[19] = builder.addSplitNode(treeId, nodeIds[5], 1, 27, (DAAL_DATA_TYPE)0.90250000000000019);
    nodeIds[20] = builder.addSplitNode(treeId, nodeIds[19], 0, 13, (DAAL_DATA_TYPE)0.66850000000000021);
    nodeIds[21] = builder.addSplitNode(treeId, nodeIds[20], 0, 19, (DAAL_DATA_TYPE)1.3185000000000002);
    nodeIds[22] = builder.addSplitNode(treeId, nodeIds[21], 0, 3, (DAAL_DATA_TYPE)0.44250000000000006);
    builder.addLeafNode(treeId, nodeIds[22], 0, (DAAL_DATA_TYPE)0.0037125764148575923);
    nodeIds[24] = builder.addSplitNode(treeId, nodeIds[22], 1, 26, (DAAL_DATA_TYPE)0.87550000000000006);
    builder.addLeafNode(treeId, nodeIds[24], 0, (DAAL_DATA_TYPE)-0.014595142720888058);
    builder.addLeafNode(treeId, nodeIds[24], 1, (DAAL_DATA_TYPE)-0.0015629260048556786);
    builder.addLeafNode(treeId, nodeIds[21], 1, (DAAL_DATA_TYPE)0.0049062470302862283);
    nodeIds[28] = builder.addSplitNode(treeId, nodeIds[20], 1, 21, (DAAL_DATA_TYPE)0.95550000000000013);
    builder.addLeafNode(treeId, nodeIds[28], 0, (DAAL_DATA_TYPE)0.0050187462457313);
    nodeIds[30] = builder.addSplitNode(treeId, nodeIds[28], 1, 4, (DAAL_DATA_TYPE)0.86550000000000005);
    builder.addLeafNode(treeId, nodeIds[30], 0, (DAAL_DATA_TYPE)0.0020687752732020969);
    builder.addLeafNode(treeId, nodeIds[30], 1, (DAAL_DATA_TYPE)-0.012409848606456882);
    nodeIds[33] = builder.addSplitNode(treeId, nodeIds[19], 1, 6, (DAAL_DATA_TYPE)-0.16349999999999998);
    nodeIds[34] = builder.addSplitNode(treeId, nodeIds[33], 0, 3, (DAAL_DATA_TYPE)1.1495000000000002);
    builder.addLeafNode(treeId, nodeIds[34], 0, (DAAL_DATA_TYPE)-0.0052784046782039414);
    nodeIds[36] = builder.addSplitNode(treeId, nodeIds[34], 1, 2, (DAAL_DATA_TYPE)0.30350000000000005);
    builder.addLeafNode(treeId, nodeIds[36], 0, (DAAL_DATA_TYPE)-0.0029872428111988921);
    builder.addLeafNode(treeId, nodeIds[36], 1, (DAAL_DATA_TYPE)0.011753486413508655);
    builder.addLeafNode(treeId, nodeIds[33], 1, (DAAL_DATA_TYPE)0.0083043150117863788);
    builder.addLeafNode(treeId, nodeIds[4], 1, (DAAL_DATA_TYPE)0.010934282286513237);
    nodeIds[41] = builder.addSplitNode(treeId, nodeIds[3], 1, 5, (DAAL_DATA_TYPE)1.3445000000000003);
    builder.addLeafNode(treeId, nodeIds[41], 0, (DAAL_DATA_TYPE)-0.00072339980144296657);
    nodeIds[43] = builder.addSplitNode(treeId, nodeIds[41], 1, 2, (DAAL_DATA_TYPE)-1.0474999999999997);
    nodeIds[44] = builder.addSplitNode(treeId, nodeIds[43], 0, 13, (DAAL_DATA_TYPE)1.3225000000000002);
    builder.addLeafNode(treeId, nodeIds[44], 0, (DAAL_DATA_TYPE)-0.011239902960369363);
    builder.addLeafNode(treeId, nodeIds[44], 1, (DAAL_DATA_TYPE)0.0044619466876611117);
    nodeIds[47] = builder.addSplitNode(treeId, nodeIds[43], 1, 2, (DAAL_DATA_TYPE)0.22350000000000003);
    nodeIds[48] = builder.addSplitNode(treeId, nodeIds[47], 0, 5, (DAAL_DATA_TYPE)1.5970000000000002);
    builder.addLeafNode(treeId, nodeIds[48], 0, (DAAL_DATA_TYPE)0.012851087371486106);
    builder.addLeafNode(treeId, nodeIds[48], 1, (DAAL_DATA_TYPE)0.0014558461930007779);
    builder.addLeafNode(treeId, nodeIds[47], 1, (DAAL_DATA_TYPE)0.0012762675732675699);
    nodeIds[52] = builder.addSplitNode(treeId, nodeIds[2], 1, 6, (DAAL_DATA_TYPE)0.057500000000000009);
    nodeIds[53] = builder.addSplitNode(treeId, nodeIds[52], 0, 2, (DAAL_DATA_TYPE)0.12150000000000001);
    builder.addLeafNode(treeId, nodeIds[53], 0, (DAAL_DATA_TYPE)0.0073136893056687862);
    builder.addLeafNode(treeId, nodeIds[53], 1, (DAAL_DATA_TYPE)-0.0078714901847498752);
    builder.addLeafNode(treeId, nodeIds[52], 1, (DAAL_DATA_TYPE)-0.013452624000216785);
    nodeIds[57] = builder.addSplitNode(treeId, nodeIds[1], 1, 23, (DAAL_DATA_TYPE)1.5735000000000003);
    builder.addLeafNode(treeId, nodeIds[57], 0, (DAAL_DATA_TYPE)-0.0015984287311765267);
    nodeIds[59] = builder.addSplitNode(treeId, nodeIds[57], 1, 5, (DAAL_DATA_TYPE)0.88150000000000006);
    builder.addLeafNode(treeId, nodeIds[59], 0, (DAAL_DATA_TYPE)-0.0031271220495303477);
    builder.addLeafNode(treeId, nodeIds[59], 1, (DAAL_DATA_TYPE)0.012629286957283815);

}